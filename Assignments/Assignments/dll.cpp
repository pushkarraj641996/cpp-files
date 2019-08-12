#include<iostream>
using namespace std;

template <class T>
class dll {
	T data;
	dll* left;
	dll* right;
	static int n;
public:
	dll(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
		n++;
	}

	void insert_front(int d){
		dll<T>* newnode = new dll<T>(d);
		if (n == 0) {
			head = newnode;
			return;
		}
		newnode->right = this;
		head = newnode;
	}

	void insert_back(int d) {
		dll<T>* newnode = new dll<T>(d);
		if (n == 0) {
			this = newnode;
			return;
		}
		dll<T>* temp = head;
		while (temp->right!= NULL) {
			temp = temp->right;
		}
		temp->right = newnode;
		newnode->left = temp;
	}

	void delete_front() {
		if (n == 0) {
			cout << "No nodes present" << endl;
			return;
		}
		dll<T>* temp = this;
		this = temp->right;
		head->left = NULL;
		delete[] temp;
	}

	void delete_back() {
		if (n == 0) {
			cout << "No nodes present" << endl;
			return;
		}
		dll<T>* temp = this;
		while (temp->right != NULL) {
			temp = temp->right;
		}
		temp = temp->left;
		delete[] temp->right;
		temp->right = NULL;
	}

	void display() {
		if (n == 0) {
			cout << "No nodes present" << endl;
			return;
		}

		dll<T>* temp = this;
		while(temp->right!=NULL) {
			cout << temp->data << " ";
			temp = temp->right;
		}
	}
};

template <class T>
int dll<T>::n;


int main() {

	dll<int>* head = NULL;
	int ch, data;
	char ch2;
	do {
		cout << "1.Insert at front" << endl
			<< "2.Insert at back" << endl
			<< "3.Delete from front" << endl
			<< "4.Delete from back" << endl
			<< "5.Display nodes" << endl << endl
			<< "Enter your choice ";
		cin >> ch;
		switch (ch) {
		case 1: cout << "Enter the data: " << endl;
			cin >> data;
			head->insert_front(data);
			break;

		case 2:	cout << "Enter the data: " << endl;
			cin >> data;
			head->insert_back(data);
			break;

		case 3: head->delete_front();
			break;
		case 4: head->delete_back();
			break;
		case 5: head->display();
			break;
		default: cout << "Invalid choice" << endl;
		}
		cout << "Want to go again (Y/N) ??";
		cin >> ch2;
	} while (ch2 == 'Y' || ch2 == 'y');
}