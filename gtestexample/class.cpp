#include<iostream>
#include"class.h"

using namespace std;

Math::Math (int a, int b)
{
        cout << "Parameterized constructor" << endl;
        num1 = a;
        num2 = b;
        sum = 0;
        difference = 0;
}

Math::~Math ()
{
        cout << "Destructor" << endl;
}

int Math::getsum (void)
{
        cout << "Getting sum" << endl;
        return sum;
}

int Math::getdifference (void)
{
        cout << "Getting difference" << endl;
        return difference;
}

int Math::add (void)
{
        cout << "Adding" << endl;
        sum = num1+num2;
        return sum;
}

int Math::subtract (void)
{
        cout << "Adding" << endl;
        difference = num1-num2;
        return difference;
}

