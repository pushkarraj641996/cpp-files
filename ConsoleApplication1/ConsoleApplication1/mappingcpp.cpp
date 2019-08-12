#include<iostream>
#include<map>
#include<cstring>
using namespace std;


int main() {

	map < string, int> M;
	M["jan"] = 1;
	M["feb"] = 2;
	M["mar"] = 3;
	M["apr"] = 4;
	M["may"] = 5;
	M["jun"] = 6;
	M["jul"] = 7;
	M["aug"] = 8;
	M["sep"] = 9;
	M["oct"] = 10;
	M["nov"] = 11;
	M["dec"] = 12;

	int d, y;
	string m, m2;
	//cout << "Enter date of birth" << endl;
	//cin >> d >> m >> y;
	
	for (int i = 0;i < m.length();i++) {
		m[i]=tolower(m[i]);
	}

	m2 = m.substr(0, 3);

	map<string, int>::iterator i;

	for (i = M.begin();i != M.end();++i) {
		cout << i->first << " " << i->second << endl;
	}
	
	//cout << endl << d << "-" << M[m2] << "-" << y << endl;
}