#include<iostream>
using namespace std;


template <class B>
B addthem(B a, B b) {
	return a + b;
}

template <class T1, class T2>
T1* addthem(T1 a[], int size1, T2 b[], int size2) {
	T1* temp = new T1[size1 + size2];
	for (int i = 0;i < size1;i++) {
		temp[i] = a[i];
	}
	for (int i = size1;i < size1+size2;i++) {
		temp[i] = b[i - size1];
	}
	return temp;
}



int main() {

	int a[] = { 10,20,30 };
	double b[] = { 40,50,60 };
	int* res;
	res = addthem(a, 3, b, 3);

	int a1[] = { 100,200,300 };
	int b1[] = { 400,500,600 };
	int* result;
	result = addthem(a1, 3, b1, 3);

	double p[] = { 15,16,17 };
	double q[] = { 18,19,20 };
	double* r = addthem(p, 3, q, 3);

	double arr1[] = { 77,78,79 };
	int arr2[] = { 90,91,92 };
	double* arr3 = addthem(arr1, 3, arr2, 3);


	for (int i = 0;i < 6;i++)
		cout << res[i] << endl;

	for (int i = 0;i < 6;i++)
		cout << result[i] << endl;

	for (int i = 0;i < 6;i++)
		cout << r[i] << endl;

	for (int i = 0;i < 6;i++)
		cout << arr3[i] << endl;

}