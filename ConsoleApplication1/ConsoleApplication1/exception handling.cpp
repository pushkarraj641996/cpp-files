#include<iostream>
#include<typeinfo>

using namespace std;

int main()
{
	int a, b, res;
	cout << "Enter the values ";
	cin >> a >> b;
	cout << "Start\n";
	try
	{
		if (b == 0)        throw 1;
		if (b == 1)        throw "Hello world";
		throw 2.5;
		res = a / b;
		cout << "RESULT = " << res << endl;
	}
	catch (int&) { cout << "problem1\n"; }
	catch (const char[]) { cout << "problem2\n"; }
	catch (...) { cout << "Unknown\n"; }
	cout << "End\n";
}


