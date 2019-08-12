#include <iostream>       // std::cerr
#include <exception>      // std::set_terminate
#include <cstdlib>        // std::abort
#include <memory>         // auto_ptr

using namespace std;

class Emp {
	int code;
	string name;
public:
	Emp(int a, string b) { code = a; name = b; cout << "Ctor called\n"; }
	~Emp() { cout << "Dtor called\n"; }
	void output() { cout << code << " " << name << endl; }
};

int main()
{
	auto_ptr<Emp> ptr(new Emp(12, "harish"));
	ptr->output();
}
