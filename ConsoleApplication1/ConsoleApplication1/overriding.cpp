#include<iostream>
using namespace std;

class alpha {
public:
	void fun1() {
		cout << "Fun 1 of Alpha class" << endl;
	}
};

class beta {
public:
	void fun2() {
		cout << "Fun 2 of Beta class" << endl;
	}
};

class delta :public beta, public alpha {
public:
	void fun1() {
		cout << "Fun1 of delta class" << endl;
	}
	void fun2() {
		cout << "Fun2 of delta class" << endl;
	}
	void fun3() {
		cout << "Fun3 of delta class" << endl;
	}
};

class omega :public delta {
public:
	void fun4() {
		cout << "Fun4 of omega class" << endl;
	}
};

int main() {
	omega o;

	o.fun1();
	o.fun2();
	o.fun3();
	o.fun4();

	return 0;
}