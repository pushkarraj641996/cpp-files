#include<iostream> 
using namespace std;

class Alpha {
int a;  public: Alpha() { a = 10; }
virtual void show() { cout << "Alpha\n"; }
};
class Beta : public Alpha {
int b; public: Beta() { b = 20; }
void show() { cout << "Beta\n"; }
};



int main() {

	Alpha* ptr;
	ptr = new Beta();
	ptr->show();
	cout << sizeof(*ptr) << endl;
	cout << sizeof(Alpha) << endl;
	cout << sizeof(Beta) << endl;
}