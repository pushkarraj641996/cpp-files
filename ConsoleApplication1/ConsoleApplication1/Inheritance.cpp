#include<iostream>
using namespace std;

class storage {
	string name;
	int price;
	int size;
public:
	storage(string name, int price, int size) {
		this->name = name;
		this->price = price;
		this->size = size;
	}

	void show()const {
		cout << "Name: " << name << endl;
		cout << "Price: Rs." << price << endl;
		cout << "Size: " << size << " GB" << endl;
	}
};

class DVD : public storage {
	bool rw;
public:
	DVD(string name, int price, int size, bool rw) : storage (name,price,size) {
		this->rw = rw;
	}
	void disp()const {
		show();
		cout << "Re-Writable: " << rw << endl;
		cout << endl;
	}
};

class HDD : public storage {
	int rpm;
public:
	HDD(string name, int price, int size, int rpm) : storage(name, price, size) {
		this->rpm = rpm;
	}

	void disp()const {
		show();
		cout << "RPM: " << rpm << endl;
		cout << endl;
	}
};

class USB : public storage {
	int type;
public:

	USB(string name, int price, int size, int type) : storage(name,price,size) {
		this->type = type;
	}

	void disp()const {
		show();
		cout << "USB Type: " << type << endl;
		cout << endl;
	}
};

int main() {
	DVD d1("Sony", 100, 4, true);
	HDD h1("Seagate", 5000, 2000, 5400);
	USB u1("Western Digital", 400, 32, 3);

	d1.disp();
	h1.disp();
	u1.disp();

	return 0;
}