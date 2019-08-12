#include <iostream>       // std::cerr
#include <exception>      // std::set_terminate
#include <cstdlib>        // std::abort
#include <memory>         // auto_ptr

using namespace std;
template <class T>
class Emp {
	static T counter;
public:
	explicit Emp() { 
		counter++;
		cout << "Object created" << endl;
		cout << "Object count = " << counter << endl << endl;
	}
	~Emp() { 
		if (counter == 0) {
			cout << "No Objects" << endl;
			exit(0);
		}
		cout << "Object got destroyed" << endl;
		counter--;
		cout << "Current object count = " << counter << endl << endl;
	}
	void output() { cout << code << " " << name << endl; }
};

template <class T>
T Emp<T> :: counter;


template <class T>
class Smart
{
	T* temp;
public:
	Smart(T* args) { temp = args; }
	~Smart() { delete temp; }
	T& operator *() { return *temp; }
	T* operator ->() { return temp; }

	void add()
};

int main()
{
	Smart<Emp> p;
	
}