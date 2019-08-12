#include<iostream>

using namespace std;

class emp {
	int code;
	string name;
public:

	emp(int code = 10, string name = NULL) {
		this->code = code;
		this->name = name;
	}

	void validate() {
		if (code <= 0 || code > 5000) {
			throw "Error in code value !!!";
			exit(-1);
		}

		for (int i = 0;i < name.length();i++) {
			if (isalpha(name[i]) && ((int)name[i] < 33 || (int)name[i] > 64) && name.length <= 10);

			else
				throw "String Error";

		}
	}
};

int main() {

	emp* obj = new emp(20, "Hello");
	obj->validate();
}