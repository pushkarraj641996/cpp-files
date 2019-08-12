#include<iostream>

using namespace std;

auto square = [](int num)-> int {
	return num * num;
};


int main() {
	cout<< square(5);
}