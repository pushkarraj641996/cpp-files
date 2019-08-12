#include<iostream>

using namespace std;


string* conv(string src[], int n) {

	string* res = new string [n];


	for (int i = 0;i < n;i++) {
		src[i][0] = toupper(src[i][0]);
	}

	for (int j = 0;j < n;j++) {
		res[j] = src[j];
	}
	
	return res;
}





int main() {

	string arr[] = { "today","something","that","this","slow" };
	cout << arr->length() << endl;
	cout << sizeof(arr)<< endl;

	string* res = conv (arr, 5);

	for (int i = 0;i < 5;i++)
		cout << res[i];

	return 0;
}