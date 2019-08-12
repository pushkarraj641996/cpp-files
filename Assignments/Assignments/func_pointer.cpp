
#include <iostream>
#include<string>
using namespace std;

int square(int num) {
	return num * num;
}

int cube(int num) {
	return num * num * num;
}

int abs(int num) {
	return num;
}

int main() {

	int (*f4[3]) (int);

	f4[0] = square;
	f4[1] = cube;
	f4[2] = abs;
	char ch2;

	do {
		cout << "1.SQuare" << endl
			<< "2.Cube" << endl
			<< "3.Absolute value" << endl
			<< "Enter your choice" << endl;

		int ch, value;
		cin >> ch;

		cout << "Enter the value to be performed"<<endl;
		cin >> value;

		ch--;
		cout << f4[ch](value) << endl;

		cout << "Want to enter more? (Y/N)"<<endl;
		cin >> ch2;

	} while (ch2 == 'Y' || ch2 == 'y');
	return 0;
}