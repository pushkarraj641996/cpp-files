#include<iostream>
using namespace std;

class alpha {
protected:
	int a;
public:
	alpha(int a = 10) {
		this->a = a;
	}
	
	virtual void show() = 0;
	void square() {
		cout << a * a << endl;
	}
};

class beta :public alpha {
	int b;
public:
	beta(int a,int b): alpha(a){
		this->b = b;
	}
	void show() {
		alpha::show();
		cout << "Showing beta" << endl;
	}
	void add() {
		cout << a + b << endl;
	}
};

class delta:public alpha {
	int c;
public:
	delta(int a, int c) : alpha(a) {
		this->c = c;
	}
	void show() {
		alpha::show();
		cout << "Showing delta" << endl;
	}
	void mult() {
		cout << a * c << endl;
	}
};

class omega :public alpha {
	int d;
public:
	omega(int a, int d) : alpha(a) {
		this->d = d;
	}
	void show() {
		alpha::show();
		cout << "Showing Omega" << endl;
	}
	void div() {
		cout << a / d << endl;
	}
};


int main() {
	alpha* ptr[3];

	ptr[0] = new beta(5, 3);
	ptr[1] = new omega(6, 4);
	ptr[2] = new delta(7, 2);

	for (auto i = 0; i < 3;i++)
	{
		ptr[i]->square();
		ptr[i]->show();

		if (typeid(*(ptr[i])) == typeid(beta)) {
			beta* p = dynamic_cast<beta*>(ptr[i]);
			if(p!=NULL){
				p->add();
			}
		}
		if (typeid(*(ptr[i])) == typeid(delta)) {
			delta* p2 = dynamic_cast<delta*>(ptr[i]);
			if (p2 != NULL) {
				p2->mult();
			}
		}
		if (typeid(*(ptr[i])) == typeid(omega)) {
			omega* p3 = dynamic_cast<omega*>(ptr[i]);
			if (p3 != NULL) {
				p3->div();
			}
		}

	}
}