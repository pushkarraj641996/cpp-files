#include<iostream>
using namespace std;

class product {
	string name;
	const double tax;
	double price;
	double mrp;

public:

	product(string name, double price, double tax_amt) :tax(tax_amt) {
		this->name = name;
		this->price = price;
		mrp = 0;
	}

	void findmrp() {
		double tax_amt = ((tax * price) / 100);
		mrp = price + tax_amt;
	}

	void show()const {
		cout << "Product name: " << name << endl;
		cout << "Tax %: " << tax << endl;
		cout << "Factory Price: Rs." << price << endl;
		cout << "MRP: Rs." << mrp << endl;
	}
};

int main() {
	product p1("ABC", 1500, 12);
	p1.findmrp();
	p1.show();
	return 0;
}