#include<iostream>
#include<cmath>
using namespace std;

class base {
	int a;
	int b;
	int result;
public:
	base(int a = 0, int b = 0) {
		this->a = a;
		this->b = b;
	}

	int calculate() {
		result = pow(a, 2) + pow(b, 2);
		return result;
	}
};

class der :public base {
	int c;
public:
	der(int a, int b, int c = 0) : base(a, b) {
		this->c = c;
	}

	void calc() {
		cout << (calculate() / pow(c, 2));
	}
};

int main() {
	der* x = new der(4, 2, 2);
	x->calc();

	return 0;
}