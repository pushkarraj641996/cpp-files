#include<iostream>

using namespace std;

class A {
	int a;
public:
	A() {
		cout << "A's const called" << endl;
		cout << sizeof(A) << endl;
	}
};

class B : virtual public A {
	int b;
public:
	B(){
		cout << "B's constructor called" << endl;
		cout << sizeof(B) << endl;
	}
};

class C : virtual public A {
	int c;
public:
	C() {
		cout << "C's constructor called" << endl;
		cout << sizeof(C) << endl;
	}
};

class D :public B, public C {
	int d;
public:
	D() {
		cout << "D's const called" << endl;
		cout << sizeof(D) << endl;
	}
};

int main() {
	//A* ptr = new B();
	//A* ptr2 = new C();
	D* ptr = new D();
}