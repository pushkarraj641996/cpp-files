#include<iostream> 
#include<cstring>
using namespace std;

int i;
class Intarray {
	int* ptr;
	int size;
public:
	Intarray(int a = 5) { size = a; ptr = new int[size]; }
	~Intarray() { delete[] ptr; }
	void in() {
		cout << "Enter vals \n";
		for (i = 0; i < size; i++) cin >> ptr[i];
	}
	void out() {
		cout << "The vals are :\n";
		for (i = 0; i < size; i++) cout << ptr[i] << " ";
		cout << endl;
	}
	void incr() { for (i = 0; i < size; i++) ptr[i]++; }
	Intarray(const Intarray& args) {
		this->size = args.size;
		this->ptr = new int[this->size];
		memcpy(this->ptr, args.ptr, this->size * sizeof(int));
	}
	void operator=(Intarray& args) {
		if (this != &args) {
			this->size = args.size;
			delete[] this->ptr;   // very important     
			this->ptr = new int[this->size];
			memcpy(this->ptr, args.ptr, this->size * sizeof(int));
		}
	}

};
int main()
{
	Intarray arr1;
	arr1.in();

	arr1.incr();

	Intarray arr2 = arr1;
	arr2.out();

	Intarray arr3(2);
	arr3 = arr1;

	arr1.out();
	arr2.out();
	arr3.out();

}
