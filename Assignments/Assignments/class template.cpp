#include<iostream>
#include<cstring>
using namespace std;

template <class T>
class Array {
	T* ptr;
	int size;

public:
	Array(T arr[], int size = 0) {
		ptr = new T[size];
		this->size = size;
		for (int i = 0;i < size;i++) {
			ptr[i] = arr[i];
		}
	}
	T max() {
		string err = "Invalid Operation";
		if (typeid(*(this->ptr)) == typeid(int) || typeid(*(this->ptr)) == typeid(double)) {
			T temp = ptr[0];
			for (int i = 1;i < size;i++) {
				if (ptr[i] > temp) {
					temp = ptr[i];
				}
			}
			return temp;
		}
		else {
			return err;
		}
	}

	T min() {
		string err = "Invalid Operation";
		if (typeid(*(this->ptr)) == typeid(int) || typeid(*(this->ptr)) == typeid(double)) {
			T temp = ptr[0];
			for (int i = 1;i < size;i++) {
				if (ptr[i] < temp) {
					temp = ptr[i];
				}
			}
			return temp;
		}
		else {
			return err;
		}
	}

	void sort() {
		string err = "Invalid Operation";
		if (typeid(*(this->ptr)) == typeid(int) || typeid(*(this->ptr)) == typeid(double)) {
			T temp = 0;
			for (int i = 0;i < size-1;i++) {
				for (int j = 0;j < size-1;j++) {
					if (this->ptr[j] > this->ptr[j + 1]) {
						temp = this->ptr[j];
						this->ptr[j] = this->ptr[j + 1];
						this->ptr[j + 1] = temp;
					}
				}
			}
			cout << endl;
			for (int i = 0;i < size;i++) {
				cout << ptr[i] << " ";
			}
		}
		else {
			cout << err;
		}
	}
	void avg() {
		if (typeid(*(this->ptr)) != typeid(string)) {
			double average = 0;
			for (int i = 0;i < size;i++) {
				average =  (double) sum() / size;
			}
			cout << average;
		}
		else
			cout << "Invalid Operation" << endl;
	}

	T sum() {
		string err = "Invalid Operation";
		if (typeid(*(this->ptr)) == typeid(int) || typeid(*(this->ptr)) == typeid(double)) {
			T sum = 0;
			for (int i = 0;i < size;i++) {
				sum += ptr[i];
			}
			return sum;
		}
		else {
			return err;
		}
	}
	void search(T args) {
		bool found = false;
			for (int i = 0;i < size;i++) {
				if (this->ptr[i] == args) {
					found = true;
					break;
				}
			}
			if (found) {
				cout << "Match found !!!" << endl;
			}
			else
				cout << "No Match Found !!!" << endl;
		}
	
};

int main() {
	//int search = 9;
	//int arr1[] = { 2,4,1,3 };    

	string arr1[] = { "Hello","World" };
	string search = "Hello";
	Array<string> arr(arr1, 2);

	//cout << arr.max() << endl;
	//cout << arr.min() << endl;
	//cout << arr.sum() << endl;
	arr.avg();
	//arr.sort();
	cout << endl;
	//arr.search(search);

	return 0;

}