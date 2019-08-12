#include<iostream> 
using namespace std;

class Alpha {
int a;  public: Alpha() { a = 10; }
void show() { cout << "Alpha\n"; }
};
class Beta : public Alpha {
int b; public: Beta() { b = 20; }
void show() { cout << "Beta\n"; }
};
class Delta : public Beta {
int c; public: Delta() { c = 30; }
void show() { cout << "Delta\n"; }
};
class Omega : public Delta {
int d; public: Omega() { d = 40; }
void show() { cout << "Omega\n"; }
};

class Nobody {
public:
	void bshow() { cout << "hey u called nobody\n"; }
};


int main() {
	//Base pointer can hold the address of any derived class
	//Alpha* ptr;
	//ptr = new Omega();   // upcasting - SAFE

/*  Nobody* ptr;
	ptr = new Nobody();

	Omega* p;
	p = reinterpret_cast<Omega*>(ptr);     // downcasting - UNSAFE
	p->dshow();
*/

	Alpha* ptr;           
	ptr = new Beta();
	ptr->show();
	cout << sizeof(*ptr);
}