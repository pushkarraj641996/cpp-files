#include<iostream> 
using namespace std;

class Sample {
	int a;
	int b;
	static bool flag;
	static Sample* temp;
	Sample() {
		a = 10;
		b = 20;
	}
public:
	void show() { cout << a << " " << b << endl; }
	void incr() { a++; b++; }
	static Sample* createobject() {
		if (flag) {
			temp = new Sample();
			flag = false;
		}
		return temp;
	}
};
bool Sample::flag = true;
Sample* Sample::temp;
int main() {
	Sample* p = Sample::createobject();
	p->show();
	p->incr();
	p->show();

	Sample* q = Sample::createobject();
	q->show();
}