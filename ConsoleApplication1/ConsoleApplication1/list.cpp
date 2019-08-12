#include<iostream>
#include<list>
using namespace std;

class number {
public:
	virtual void fun() {
		cout << "Number fun called !!!" << endl;
	}
};

class decimal : public number {
public:
	void fun() {
		cout << "Decimal fun called !!!" << endl;
	}
};

class binary : public number {
public:
	void fun() {
		cout << "Binary fun called !!!" << endl;
	}
};

int main() {
	
	list<number*> ob;
	ob.push_back(new decimal());
	ob.push_back(new binary());

	list<number*>::iterator i = ob.begin();
	
	for (i;i != ob.end();i++) {
		(*i)->fun();
	}
	
}