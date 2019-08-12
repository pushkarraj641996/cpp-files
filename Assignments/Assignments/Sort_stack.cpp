#include<iostream>

using namespace std;

class stack {
	int* data;
	int size;
	int top;

public:

	stack(int size = 10) {
		top = -1;
		this->size = size;
		data = new int[size];
	}

	~stack() {
		delete[] data;
	}

	void push(int i) {
		if (top == size - 1) {
			cout << "Overflow" << endl;
			exit(0);
		}

		data[++top] = i;

	}

	int pop() {
		if (top == -1) {
			cout<<"Underflow"<<endl;
			exit(0);
		}

		return data[top--];

	}

};

int main() {

	int arr[] = { 50,40,70,20 };

	stack* obj = new stack(4);

	obj->push(50);
	obj->push(40);
	obj->push(70);
	obj->push(20);

	stack* obj2 = new stack(10);

	int max = obj->pop();

	for (int i = 0;i < 4;i++) {
		
	}
}