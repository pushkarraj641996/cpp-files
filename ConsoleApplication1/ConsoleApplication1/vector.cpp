#include<iostream>
using namespace std;

template <class T>
class MyVector {
	T *data;
	int size;
	int count;
public:
	MyVector(int size = 5) {
		count = -1;
		this->size = size;
		data = new T[size];
	}

	void add_elem(T arg) {
		count++;
		data[count] = arg;
	}
	
	MyVector(MyVector& arg) {
		this->size = arg.size;
		this->count = arg.count;
		for (int i = 0;i < count;i++) {
			this->data[i] = arg.data[i];
		}
	}

	~MyVector() {
		delete data;
	}

	int get_size() {
		return count;
	}

	T& operator [] (int arg) {
		return data[arg];
	}
};



int main() {
	MyVector<int> vob;
	
	vob.add_elem(10);
	vob.add_elem(20);
	vob.add_elem(30);
	vob[0] = 25;

	// MyVector<int> vob2(vob);
	cout << vob2[0] << endl;
	cout<<vob.get_size();
}