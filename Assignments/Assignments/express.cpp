#include<iostream>

using namespace std;

class express {
	int* ptr;
	int size;

public:

	express() {
		cout << "Object Created" << endl;
		size = 10;
		ptr = new int[size];
	}

	express(int x) {
		cout << "Object Created" << endl;
		size = x;
		ptr = new int[size];
	}

	~express() {
		delete[] ptr;
	}

	void in() {
		cout << "Enter values: " << endl;
		for (int i = 0;i < size;i++) {
			cin >> ptr[i];
		}
	}

	void out() {
		cout << "values are: " << endl;
		for (int i = 0;i < size;i++) {
			cout << ptr[i] << endl;
		}
	}
	void fun() {
		express aob(5);
		aob.in();
		aob.out();
	}
};

int main() {
	
	express ex;
	ex.fun();

	return 0;
}