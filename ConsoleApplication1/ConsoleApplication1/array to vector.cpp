#include<iostream>
using namespace std;

template <class T>
class MyVector {
	T* data;
	int size;
	int count;

public:

	MyVector(int size = 3) {
		count = -1;
		data = new T[size];

		this->size = size;
	}

	~MyVector() {
		delete data;
	}

	MyVector(const MyVector& arg) {
		this->size = size;
		this->count = count;
		for (int i = 0;i < count;i++) {
			for (int j = 0;j < size;j++) {
				this->data[i][j] = args.data[i][j];
			}
		}
	}

	void add_elem(T arg[]) {
		count++;
		for (int i = 0;i < count;i++) {
			data[count][i] = arg.data[i];
		}
	}

	int get_size() {
		return count;
	}

	T operator [][] (int index1, int index2 ) {
		if (index1 <= count) {
			return this->data[index1][index2];
		}
	}
};

int main() {
	MyVector<int> vob;

	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 7,8,9,10,11 };
	vob.add_elem(arr1);
	vob.add_elem(arr2);

	cout << vob[0][0];
}