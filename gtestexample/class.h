#ifndef MATH_H
#define MATH_H

#include<iostream>

using namespace std;

class Math
{
public:	
	Math(int, int);
	
	~Math ();
	
	int getsum ();
	int getdifference ();

	int add ();
	int subtract (); 

protected:
	int num1;
	int num2;
	int sum;
	int difference;
		
};

#endif
