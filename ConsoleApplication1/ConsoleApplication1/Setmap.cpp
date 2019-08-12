#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int stud[] = { 1,2,3,4,5,6 };
int cricket[] = { 1,2,4,5 };
int football[] = { 1,3,5,3 };
int tennis[] = { 4,5 };
int MAX = 10;


set<int> A(cricket, cricket + MAX);
set<int> B(football, football + MAX);
set<int> C(tennis, tennis + MAX);
set<int> D(stud, stud + MAX);


void  no_game() {

	set<int> uni1;
	set<int> uni2;
	set<int> set3;
	set<int>::iterator it;

	set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(uni1, uni1.end()));
	set_union(uni1.begin(), uni1.end(), C.begin(), C.end(), inserter(uni2,uni2.end()));

	set_difference(D.begin(), D.end(), uni2.begin(), uni2.end(), inserter(set3, set3.end()));
	for (it = set3.begin();it != set3.end();++it) {
		cout << *it << " ";
	}
	
}

void all_games() {
	set<int> uni1;
	set<int> uni2;
	
	set<int>::iterator it;

	set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(uni1, uni1.end()));
	set_intersection(uni1.begin(), uni1.end(), C.begin(), C.end(), inserter(uni2, uni2.end()));

	for (it = uni2.begin();it != uni2.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}
	
int main() {
	
	no_game();
	all_games();

}
