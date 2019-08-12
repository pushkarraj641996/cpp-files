#include<iostream>
using namespace std;


template <class B>    // Template Function
B addthem(B a, B b) {
	return a + b;
}

template <class T1,class T2>
T1* addthem(T1* a,int size1, T2* b, int size2) {
	T1* temp = new T1[size1+size2];
	for (int i = 0;i < 3;i++) {
		temp[i] = a[i];
	}
	for (int i = 3;i < 6;i++) {
		temp[i] = b[i - 3];
	}
	return temp;
}

template <class T>
T* addthem(T* a,int size1, T* b,int size2) {
	T* temp = new T[size1+size2];
	for (int i = 0;i < 3;i++) {
		temp[i] = a[i];
	}
	for (int i = 3;i < 6;i++) {
		temp[i] = b[i - 3];
	}
	return temp;
}



int main() {

	int a[] = { 10,20,30 };
	double b[] = { 1,2,3 };
	int *res;
	res = addthem(a, 3, b, 3);

	double p[] = { 1,2,3 };
	double q[] = { 4,5,6 };
	double* r = addthem(p, 3, q, 3);

	double arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	double* arr3 = addthem(arr1, 3, arr2, 3);


	for (int i = 0;i < 6;i++)
		cout << res[i] << endl;

	for (int i = 0;i < 6;i++)
		cout << r[i] << endl;

	for (int i = 0;i < 6;i++)
		cout << arr3[i] << endl;

}