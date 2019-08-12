#include<iostream>
using namespace std;

class time {
	int hrs;
	int min;
	int sec;
public:
	time(int hrs = 0, int min = 0, int sec = 0) {
		this->hrs = hrs;
		this->min = min;
		this->sec = sec;
	}

	void show() {
		cout << this->hrs << ":" << this->min << ":" << this->sec << endl;
	}

	bool operator == (const time& obj) {
		if (this->hrs == obj.hrs && this->min == obj.min && this->sec == obj.sec) {
			return true;
		}
		else
			return false;
	}

	time operator + (const int& obj) {
		time temp;
		int value;
		temp.hrs = this->hrs;
		temp.sec = this->sec;
		if ((this->min + obj) >= 60) {
			temp.min = (this->min + obj);
			value = temp.min / 60;
			temp.min = (this->min + obj) % 60;
			temp.hrs += value;
		}
		else
			temp.min += obj;
		return temp;
	}

	bool operator > (const time& obj) {
		if (this->hrs > obj.hrs)
			return true;
		else
			return false;
	}
};


int main() {
	time t1(10, 58, 30);
	time t2(10, 20, 30);

	if (t1 == t2)
		cout << "yes" << endl;
	else
		cout << "No" << endl;

	time t3 = t1 + 5;
	t3.show();

	if (t1 > t2) {
		cout << "Yes";
	}
	else
		cout << "No";
}