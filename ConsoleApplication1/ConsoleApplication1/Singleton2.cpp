#include<iostream> 
using namespace std;

class Sample {
	int a;
	int b;
	static Sample* temp;
	static int count;
	Sample() {
		a = 10;
		b = 20;
	}
public:
	void show() { cout << a << " " << b << endl; }
	void incr() { a++; b++; }
	static Sample* createobject() {
		if (count <= 1) {
			temp = new Sample();
			count++;
			return temp;
		}
		else {
			cerr << "Cannot create more than 2 objects" << endl;
			return NULL;
			
		}
	}
};
int Sample::count;
Sample* Sample::temp;
int main() {
	Sample* p = Sample::createobject();
	p->incr();
	p->show();

	Sample* q = Sample::createobject();
	q->show();
	Sample* r = Sample::createobject();
	r->show();
	//p->show();
}