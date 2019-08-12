#include<iostream> 
using namespace std;

class Alpha {
int a;  public: Alpha() { a = 10; }
virtual void show() = 0;
void fun2(){
	cout << "Base class" << endl;
	}
};
class Beta : public Alpha {
int b; public: Beta() { b = 20; }
virtual void show() { 
	cout << "Virtual fn defined in Beta\n" << endl;
	}
void fun3() {
	cout << "Derived class fun3() called" << endl;
	}
};

/*class Nobody {
public:
	virtual void show() { cout << "hey u called nobody\n"; }
};
*/



int main() {

	Alpha* ptr;
	ptr = new Beta();

	//ptr->show();
	//ptr->fun2();

	// Beta* ptr2 = reinterpret_cast<Beta*>(ptr);  //not safe method

	//Nobody* ptr = new Nobody();

	Beta* p = dynamic_cast<Beta*>(ptr);  // SAFE DOWNCASTING
	if (p != NULL)
		p->fun3();
	else
		cout << "\nConvertion Failed\n";

	return 0;
}