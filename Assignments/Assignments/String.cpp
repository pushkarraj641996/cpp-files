#include<iostream>
#include<string.h>
using namespace std;

void swap(string src) {
	char x = src[0];
	char y = src[src.length() - 1];

	src[0] = y;
	src[src.length() - 1] = x;
	cout << src << endl;
}

string rever(string src) {
	string rev;
	for (int i = src.length() - 1;i >= 0;i--) {
		rev += src[i];
	}
	return rev;
}

void reverse_half(string src) {
	string req1;
	string req2;
	for (int i = 0;i < (src.length() / 2);i++) {
		req1 += src[i];
	}

	for (int i = src.length() / 2;i < src.length();i++) {
		req2 += src[i];
	}
	req1 = rever(req1);
	req1 = req1 + req2;
	cout << req1 << endl;
}

void special_reverse(string src) {
	char start = src[0];
	char end = src[src.length() - 1];

	string req = rever(src);
	req[0] = start;
	req[req.length() - 1] = end;
	cout << req << endl;
}

void reverse_alternate(string src) {
	bool ans;
	cout << "Even Index? (1/0)";
	cin >> ans;

	if (ans == 1) {
		for (int i = 0;i < src.length();i += 2) {
			src[i] = toupper(src[i]);
		}
	}
	else {
		for (int i = 1;i < src.length();i += 2) {
			src[i] = toupper(src[i]);
		}
	}

	cout << src << endl;
}

string* upper(string arr[], int n) {
	string* res = new string[n];
	for (int i = 0;i < arr->length() - 1;i++) {
		res[i] = arr[i];
		res[i][0] = toupper(res[i][0]);
	}
	return res;
}

int main() {

	string s = "bengaluru";
	string arr[] = { "hello","world","of","unix" };
	string* title = upper(arr, 5);
	swap(s);
	reverse_half(s);
	special_reverse(s);
	reverse_alternate(s);

	for (int i = 0;i < 5;i++) {
		cout << title[i] << " ";
	}
	return 0;
}