#include<iostream>
using namespace std;


class Alpha {
	int* ptr;
public:
	Alpha() {
		ptr = new int; *ptr = 10;
		cout << "Alpha const called" << endl;
	}
	virtual ~Alpha() { delete ptr; cout << "Alpha dest called" << endl;
	}
	virtual void show() { cout << "Alpha = " << *ptr << endl; }  // virtual destructor...if not added virtual then memory leauque
};

class Beta : public Alpha {
	int* mtr;
public:
	Beta() { mtr = new int;  *mtr = 20; cout << "Beta const called" << endl;
	}
	~Beta() { delete mtr; cout << "Beta dest called" << endl;
	}
	void show() {
		Alpha::show();
		cout << "Beta = " << *mtr << endl;
	}
};

int main() {
	Alpha* obptr = new Beta;
	obptr->show();
	delete obptr;
}
