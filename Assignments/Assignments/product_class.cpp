#include<iostream>
using namespace std;

class product {
	int pid;
	string pname;
	int qty;
	double price;

public:
	product(product& args) {
		this->pid = args.pid;
		this->pname = args.pname;
		this->qty = args.qty;
		this->price = args.price;
	}
	product(int pid = 0,string pname = " Unknown",int qty = 0,double price = 0){
		this->pid = pid;
		this->pname = pname;
		this->qty = qty;
		this->price = price;
	}
	int return_qty() {
		return this->qty;
	}

	void show() {
		cout << "product ID: " << pid << endl;
		cout << "Name: " << pname << endl;
		cout << "Quantity: " << qty << endl;
		cout << "Price: Rs. " << price << endl;
	}
};

void sorted(product* temp[], int size ) {
	product* temporary = new product();
	for(int j=0; j<size-1; j++){
		for (int i = 0;i < size-1;i++) {
			if (temp[i]->return_qty() > temp[i+1]->return_qty()) {
				temporary = temp[i];
				temp[i] = temp[i+1];
				temp[i+1] = temporary;
			}
		}

	}
}

int main() {
	product* p[4];
	p[0] = new product(1, "Bottle", 10, 20);
	p[1] = new product(2, "Pen", 5, 10);
	p[2] = new product(3, "Home Theatre", 2, 30000);
	p[3] = new product(4, "laptop", 1, 20000);
	sorted(p,4);
	for (int i = 0;i < 4;i++) {
		p[i]->show();
		cout << endl;
	}
	
	return 0;
}