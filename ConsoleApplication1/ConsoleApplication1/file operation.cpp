#include<iostream>
#include<fstream>
#include<cstring>
#include <string>

using namespace std;


class myfile {
	fstream f;
	string buffer;
public:
	myfile() {
		f.open("file.txt", ios::in | ios::out);
	}

	~myfile() {
		f.close();
	}

	void head(int i) {
		cout << "Startng " << i << " lines are: " << endl;
		while (!f.eof() && i) {
			getline(f, buffer);
			cout << buffer << endl;
			i--;
		}
	}
	void tail(int i) {
		int lines = 0;
		string line;
		while (!f.eof()) {
			getline(f, line);
			lines++;
		}
		
		int count = lines - i;

		f.seekg(0, ios::beg);
		while (count) {
			getline(f, line);
			count--;
		}
		cout << "Last " << i << " lines are: " << endl;
		while (!f.eof()) {
			getline(f, buffer);
			cout << buffer << endl;
		}
	}

	void reverse() {
		string content[100];
		int i = 0;
		f.seekp(0, ios::beg);
		while(!f.eof()){
			f >> buffer;
			content[i] = buffer;
			i++;
		}
		f.seekp(0, ios::beg);
		for (int k = i;k >= 0;k--) {
			//f << content[k];
			cout << content[k] << endl;
		}
	}

	void search(string key) {
		bool flag = false;
		f.seekg(0, ios::beg);
		while (!f.eof()) {
			f >> buffer;
			if (buffer == key) {
				cout << "Found !!!" << endl;
				flag = true;
				break;
			}
		}
		if (flag == false) {
			cout << "Not Found !!!" << endl;
		}
	}
};

int main() {

	myfile* obj = new myfile();

	obj->head(3);

	obj->tail(3);

	obj->reverse();

	obj->search("Hello World");
}
	

