#include<iostream>
using namespace std;

class testcase {
	string name;
	int exp;
	int res;
	static int counter;
	static int Pcounter;
	bool status;

public:
	testcase(string name, int exp, int res) {
		this->name = name;
		this->exp = exp;
		this->res = res;
		counter++;

		if (exp == res) {
			status = true;
			Pcounter++;
		}
		else {
			status = false;
		}
	}

	void show(){
		cout << "testcase: " << name << endl;
		cout << "Expected: " << exp << endl;
		cout << "Result: " << res << endl;
	}

	void show2() {
		cout << "Status: " << status << endl;
	}

	static void stat_find() {
		double PP;
		PP = (Pcounter * 100) / counter;
		cout << "Pcounter: " << Pcounter << endl;
		cout << "Pass Percent: " << PP << "%" << endl;
		cout << "Fail percent: " << 100 - PP << "%" << endl;
	}
};

int testcase::counter;
int testcase::Pcounter;

int main() {

	testcase t1("X1", 23, 23);
	testcase t2("X2", 25, 25);
	testcase t3("X3", 30, 30);
	testcase t4("X4", 40, 40);
	testcase t5("X5", 22, 22);
	testcase t6("X6", 23, 27);
	//testcase t7("X7", 23, 20);
	//testcase t8("X8", 23, 21);
	//testcase t9("X9", 23, 55);
	//testcase t10("X10", 23, 42);

	t1.show();
	t1.show2();
	t1.stat_find();
	
	return 0;
}