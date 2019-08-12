class.h -> "Math" class header file
class.cpp -> "Math" class cpp file
main.cpp -> main function
gtest_main.cpp -> gtest main function
TestClass.h -> "MathDummy" and "TestMathDummy" classes header file
TestClass.cpp -> "MathDummy" and "TestMathDummy" classes cpp file and test cases
Makefile -> Makefile to create normal Binary (make)
Makefile.UnitTest -> Makefile to create UT Binary (make -f Makefile.UnitTest)
runUT.sh -> shell script to export GTest XML report and run the UT Binary
UTestReport.html -> html file to parsethe xml report. Open with firefox for best results