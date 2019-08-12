#include<gtest/gtest.h>
#include"TestClass.h"

using namespace std;

int TestMathDummy::mArgc = 0;
char** TestMathDummy::mArgs = NULL;
MathDummy* TestMathDummy::pM = NULL;

TestMathDummy::TestMathDummy(void)
{

}

TestMathDummy::~TestMathDummy(void)
{

}

void TestMathDummy::SetUpTestCase()
{
	cout << "Set up test cases." << endl;

	if ( pM != NULL )
	{
		delete pM;
	}

	pM = new MathDummy (4, 2);
}

void TestMathDummy::TearDownTestCase()
{
	cout << "Tear down test cases." << endl;

	delete pM;
}

void TestMathDummy::SetUp(void)
{

}

void TestMathDummy::TearDown(void)
{

}

TEST_F ( TestMathDummy, getsum_1 )
{
	int s = 7;
	pM->add();
	ASSERT_EQ ( s, pM->getsum() );
}

TEST_F ( TestMathDummy, getsum_2 )
{
	int s = 6;
	pM->add();
	ASSERT_EQ ( s, pM->getsum() );
}