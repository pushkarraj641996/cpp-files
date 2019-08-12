#include<iostream>
using namespace std;

class  question {
	int sno;
	string prose;
	string optA;
	string optB;
	string optC;
	string optD;
	string correct;
public:
	question(int sno, string prose, string optA, string optB, string optC, string optD, string correct) {
		this->sno = sno;
		this->prose = prose;
		this->optA = optA;
		this->optB = optB;
		this->optC = optC;
		this->optD = optD;
		this->correct = correct;
	}

	string get_correct() {
		return this->correct;
	}
};

class test: public question {
	string name;
	string answer[5];
	int counter = 0;
public:
	test(int sno[], string prose[],string optA[], string optB[], string optC[], string optD[], string correct[], string name,string answer[]):
		question (sno,prose,optA,optB,optC,optD,correct)
	{
		this->name = name;
		for (int i = 0;i < 5;i++) {
			this->answer[i] = answer[i];
		}
	}

	string ans(int i) {
		return this->answer[i];
	}

	string correct(int i) {
		this->q[i]->get_correct();
	}

	void find() {
		for (int i = 0;i < 5;i++) {
			if (ans(i) == correct(i)) {
				counter++;
			}
		}
	}

	bool isPassed() {
		if (counter >= 3) {
			return true;
		}
		else
			return false;
	}
};

int main() {
	int count = 0;

	int sn1[] = { 1,2,3,4,5 };
	string pro1[] = { "Java","CPP","Dot Net","C","Python" };
	string A1[] = { "A","A","A","A","A" };
	string B1[] = { "B","B","B","B","B" };
	string C1[] = { "C","C","C","C","C" };
	string D1[] = { "D","D","D","D","D" };
	string correct1[] = { "A","C","D","D","B" };
	string given1[] = { "A","C","D","D","D" };

	int sn2[] = { 6,7,8,9,10 };
	string pro2[] = { "History","Geography","Physics","Chemistry","Mathematics" };
	string A2[] = { "A","A","A","A","A" };
	string B2[] = { "B","B","B","B","B" };
	string C2[] = { "C","C","C","C","C" };
	string D2[] = { "D","D","D","D","D" };
	string correct2[] = { "A","C","D","D","B" };
	string given2[] = { "A","A","A","C","B" };

	test* t1 = new test(sn1, pro1, A1, B1, C1, D1, correct1, "Rahul", given1);
	test* t2 = new test(sn2, pro2, A2, B2, C2, D2, correct2, "Pushkar", given2);

	//t1->find();
	//t2->find();
	for (int i = 0;i < 5;i++) {
		cout << t1->correct(i) << " ";
	}

	if (t1->isPassed()) {
		count++;
	}
	if (t2->isPassed())
		count++;

	double pass;
	pass = (count * 100) / 2;
	//cout << "Pass % = " << pass << endl;
	//cout << "Fail %: " << (100-pass) << endl;

	//cout << count;
}