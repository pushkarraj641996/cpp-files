#include<iostream>
#include<ctime>


using namespace std;

void date() {
	const int BASE_YEAR = 1900;
	time_t t = time(0);
	tm* local = localtime(&t);
	cout << local->tm_mday << "/" << local->tm_mon+1 << "/" << local->tm_year + BASE_YEAR<< endl;
}

int square(int a) {
	date();
	return a * a;
}

int add(int a, int b) {
	date();
	return a + b;
}

int cube(int a) {
	date();
	return a * a * a;
}

int express(int a, int b, int c) {
	date();
	return square(a) + square(b) + square(c) + 2 * a * b + 2 * b * c + 2 * c * a;
}

int main() {
	int ch;
	cout << "1.Square" << endl
		<< "2.Cube" << endl
		<< "3.Add" << endl
		<< "4.Square of Sum of 3 numbers" << endl
		<< "Enter choice" << endl;

	cin >> ch;
	switch (ch) {

	case 1: cout<<square(3);
		break;
	case 2: cout<<cube(3);
		break;
	case 3: cout<<add(3, 2);
		break;
	case 4: cout<<express(2, 3, 4);
		break;
	default:cout << "invalid choice";
	}
}