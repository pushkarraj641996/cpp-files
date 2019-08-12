#include<iostream>
using namespace std;

class books {
	int bid;
	string bname;
public:
	books(int bid = 0, string bname = "UNKNOWN") {
		this->bid = bid;
		this->bname = bname;
	}
	int getbid() {
		return bid;
	}
	string get_bname() {
		return bname;
	}
};

class student {
	int sid;
	string stname;
	books* b[2];
public:
	student(int sid, int bid[2], string stname, string bname[2]){
		this->sid = sid;
		this->stname = stname;
		for (int i = 0;i < 2;i++) {
			b[i] = new books(bid[i], bname[i]);
		}
	}

	void show() {
		cout << "STUDENT DETAILS: " << endl;
		cout << "Student ID: " << sid << endl;
		cout << "Name: " << stname << endl;
		cout << "books Borrowed details: " << endl;
		for (int i = 0;i < 2;i++) {
			cout << "Book ID: " << b[i]->getbid() << endl;
			cout << "Book Name: " << b[i]->get_bname() << endl;
		}
		cout << endl << endl;
	}
};

int main() {
	student* s1[2];
	int b1_id[] = { 1,2 };
	string b1_name[] = { "Java", "Cpp" };

	int b2_id[] = { 3,4 };
	string b2_name[] = { "Python","JavaScript" };

	s1[0] = new student(1, b1_id, "Pushkar", b1_name);
	s1[1] = new student(2, b2_id, "Rahul", b2_name);

	s1[0]->show();
	s1[1]->show();

	return 0;
}