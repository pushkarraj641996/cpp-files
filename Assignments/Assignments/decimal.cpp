#include<iostream>
using namespace std;

class decimal {
	int d;

public:

	decimal(int d = 0) {
		this->d = d;
	}
	int get_d() {
		return d;
	}
};

class binary: public decimal {
	int arr[10];
	int c = 0;
	int d = get_d();
public:

	binary(int b = 0): decimal(b){}

	void conversion() {
		while (d > 0) {
			arr[c] = (d % 2);
			d /= 2;
			c++;
		}

		for (int i = c-1;i >= 0;i--) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

class hexa : public decimal {
	int arr[10];
	int c = 0;
	int d = get_d();
public:

	hexa(int b = 0) : decimal(b) {}

	void conversion() {
		while (d > 0) {
			arr[c] = (d % 16);
			d /= 16;
			c++;
		}

		for (int i = c - 1;i >= 0;i--) {
			if (arr[i] >= 10) {
				cout << (char)(55 + arr[i]) << " ";
			}
			else {
				cout << arr[i] << " ";
			}
		}
		cout << endl;
	}
};

class octal : public decimal {
	int arr[10];
	int c = 0;
	int d = get_d();
public:

	octal(int b = 0) : decimal(b) {}

	void conversion() {
		while (d > 0) {
			arr[c] = (d % 8);
			d /= 8;
			c++;
		}

		for (int i = c - 1;i >= 0;i--) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};


int main() {
	binary* ptr = new binary(3);
	hexa* ptr2 = new hexa(500);
	octal* ptr3 = new octal(500);
	ptr->conversion();
	ptr2->conversion();
	ptr3->conversion();
}