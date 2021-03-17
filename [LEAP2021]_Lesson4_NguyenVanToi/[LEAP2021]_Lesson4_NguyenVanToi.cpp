#include<iostream>
#include <string>

using namespace std;

class Door {
private:
	string description;
public:
	Door() {
		cout << "Day la cai cua" << endl;
	}

	virtual string getDescription() const {
		return description;
	}
};


class Transitions : public Door {

};

class unlockDoor : public Door {
private:
	Door* mDoor;
public:
	unlockDoor(Door* myDoor) {
		mDoor = myDoor;
	}

	virtual ~unlockDoor() {

	}

	string getDescription() const {
		return mDoor->getDescription() + " mo khoa cua";
	}
};
class lockDoor : public Door {
private:
	Door* mDoor;
public:
	lockDoor(Door* myDoor) {
		mDoor = myDoor;
	}

	virtual ~lockDoor() {

	}

	string getDescription() const {
		return mDoor->getDescription() + "khoa cua";
	}
};
class openDoor : public Door {
private:
	Door* mDoor;
public:
	openDoor(Door* myDoor) {
		mDoor = myDoor;
	}

	virtual ~openDoor() {

	}

	string getDescription() const {
		return mDoor->getDescription() + " mo cua";
	}
};
class closeDoor : public Door {
private:
	Door* mDoor;
public:
	closeDoor(Door* myDoor) {
		mDoor = myDoor;
	}

	virtual ~closeDoor() {

	}

	string getDescription() const {
		return mDoor->getDescription() + " dong cua";
	}
};

int main(int argc, char** argv) {
	Door* objlover;
	objlover = new Door();

	objlover = new unlockDoor(objlover);
	cout << objlover->getDescription() << endl;

	/*objlover = new lockDoor(objlover);
	cout << objlover->getDescription() << endl;

	objlover = new openDoor(objlover);
	cout << objlover->getDescription() << endl;

	objlover = new closeDoor(objlover);
	cout << objlover->getDescription() << endl;*/

	delete objlover;
	return 0;
}