#include<iostream>
using namespace std;

class alpha {
	int x;
public:
	alpha(int x = 10) { 
		this->x = x; 
	}

	bool operator == (alpha const&  obj) {
		if (this->x == obj.x) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	alpha aob(10);
	alpha bob(20);

	if (aob == bob) {
		cout << "They are equal" << endl;
	}
	else {
		cout << "They are not equal" << endl;
	}

	return 0;
}