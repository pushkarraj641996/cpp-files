#include<iostream>
#include"class.h"

using namespace std;

int main ()
{
	int s1=0;
	int s2=0;
	int d1=0;
	int d2=0;
	Math m1(4, 2);
	s1=m1.add();
	d1=m1.subtract();
	s2=m1.getsum();
	d2=m1.getdifference();
	cout << "s1=" << s1 << " s2=" << s2 << " d1=" << d1 << " d2=" << d2 << endl;
}
