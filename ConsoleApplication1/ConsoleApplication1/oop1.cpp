#include<iostream>
using namespace std;

class stud {
private:
	string name;
	int* marks;
	int total;
	double avg;

public:
	stud() { marks = new int[6]; total = avg = 0; }
	stud(string name, int* y) {
		marks = new int[6];
		this->name = name;
		for (int i = 0;i < 6;i++) {
			this->marks[i] = y[i];
		}
	}
	~stud() { delete[] marks; }
	void fill(string n, int* y) {
		name = n;
		for (int i = 0;i < 6;i++) {
			marks[i] = y[i];
		}
	}

	void find() {
		for (int i = 0;i <=5;i++) {
			total += marks[i];
		}

		avg = total / 6.0;
	}

	void isPassed() {
		
		if (avg >= 40)
			cout << "Passed" << endl;
		else
			cout << "Failed" << endl;
	}

	void showdetails() {
		cout << "Name:" << name << endl;
		cout << "Marks:" << endl;
		for (int i = 0;i <=5;i++) {
			cout << marks[i] << endl;
		}
		find();
		cout << "Total" << total << endl;
		cout << "Average:" << avg << endl;
		cout << "Status:";
		isPassed();
	}
};

int main() {
	stud s1;

	string name = "Pushkar";
	int arr[] = { 70,90,60,86,88,91 };
	s1.fill(name, arr);
	s1.showdetails();


}