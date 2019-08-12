#include<iostream>
using namespace std;


class product {
	string name;
	int price;
	int qty;
	static int total;

public:
	product(string name, int price, int qt) {
		this->name = name;
		this->price = price;
		qty = qt;
		total += qty;
	}

	static void show() {
		cout << total;
	}
};

int product::total;

int main() {

	product p1("abc",23,56);
	product p2("pqr", 23, 10);
	p1.show();
	return 0;
}