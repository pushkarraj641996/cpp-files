#include<iostream>
#include<fstream>
#include<cstring>
#include<string>

using namespace std;

class  question {
	string sno;
	string prose;
	string optA;
	string optB;
	string optC;
	string optD;
	string correct;
	string given;

    int marks=0;
public:
	question(string buff[5][8]) {

		int i;
		string ans;

		for (i = 0;i < 5;i++) {
			this->sno = buff[i][0];
			this->prose = buff[i][1];
			this->optA = buff[i][2];
			this->optB = buff[i][3];
			this->optC = buff[i][4];
			this->optD = buff[i][5];
			this->correct = buff[i][6];

			cout << endl << sno << endl << prose << optA << endl << optB << endl << optC << endl << optD << endl;

			cout << "Give Your Ans: ";
			cin >> ans;
			cout<<endl;
			this->given = ans;

			if (correct.compare(ans)==1) 
			{
				this->marks++;
			}
		}

	}

	 int get_marks() {
		return marks;
	}
};


int main() {
	string name, email;
	int ch;
	fstream f;
	string buffer[5][8];
	int i = 0;
	question* q;

	cout << "Name: ";
	cin >> name;
	cout << endl << "Email: ";
	cin >> email;

	cout << "1. Run" << endl
		<< "2. Exit"
		<< endl;
	cin >> ch;

	switch (ch) {
	case 1:
		f.open("ques.txt", ios::in | ios::out);

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				getline(f, buffer[i][j], '#');
			}
		}
		q = new question(buffer);
		cout << "Marks :" << q->get_marks();

		break;
	}
}