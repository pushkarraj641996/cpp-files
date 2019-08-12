#ifndef TESTCLASS_H
#define TESTCLASS_H

#include<iostream>
#include<gtest/gtest.h>
#include"class.h"

using namespace std;


class MathDummy : public Math
{
public:
	MathDummy(int a, int b):Math(a, b)
	{
		cout << "Constructor" << endl;
	}
	
	FRIEND_TEST ( TestMathDummy, getsum_1 );

};

class TestMathDummy : public ::testing::Test
{
public:
	TestMathDummy();
	virtual ~TestMathDummy();
	static void SetUpTestCase ();
	static void TearDownTestCase ();
	virtual void SetUp ( void );
	virtual void TearDown ( void );

	static int mArgc;
	static char** mArgs;

	static MathDummy* pM;
};

#endif
