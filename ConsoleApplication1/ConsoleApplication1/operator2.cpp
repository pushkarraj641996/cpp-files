#include<iostream>
using namespace std;

class alpha {
	int x;
	static int counter;
public:
	alpha(int x = 10) {
		this->x = x;
		counter++;
	}

	alpha operator + (const alpha& obj) {
		alpha temp;
		temp.x = this->x + obj.x;
		return temp;
	}

	void show() {
		cout << x << endl;
	}
	static void obj_count() {
		cout << "Objects created: " << counter << endl;
	}
};

int alpha :: counter;

int main() {
	alpha a1(10);  //1
	alpha a2(20); //2
	alpha a3(30); //3
	alpha a4(10); //4
	alpha result; //5

	result.obj_count();
	result = a1 + a2 + a3 + a4;
	result.show();
	alpha::obj_count();
	return 0;
}