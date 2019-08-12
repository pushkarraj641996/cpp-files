#include<iostream>
using namespace std;

class date {
	int day;
	int month;
	int year;
public:
	date(int day = 0, int month = 0, int year = 0) {
		this->day = day;
		this->month = month;
		this->year = year;
	}

	void show() {
		cout << day << "/" << month << "/" << year << endl;
	}

	void swap(date &a1, date &a2) {
		date temp;
		temp.day = a1.day;
		temp.month = a1.month;
		temp.year = a1.year;

		a1.day = a2.day;
		a1.month = a2.month;
		a1.year = a2.year;

		a2.day = temp.day;
		a2.month = temp.month;
		a2.year = temp.year;
	}

	void sort(date arg[],int size) {
		for (int i = 0;i < size-1;i++) {
			for (int j = 0;j < size-1;j++) {
				if (arg[j].year > arg[j + 1].year) {
					swap(arg[j], arg[j + 1]);
				}
				else if (arg[j].year == arg[j + 1].year) {
					if (arg[j].month > arg[j + 1].month) {
						swap(arg[j], arg[j + 1]);
					}
					else if (arg[j].month == arg[j + 1].month) {
						if (arg[j].day > arg[j + 1].day) {
							swap(arg[j], arg[j + 1]);
						}
					}
				}
			}
		}
	}
};

int main() {
	date d1(10, 3, 17);
	date d2(5, 3, 17);
	date d3(1, 3, 17);

	date d[] = { d1,d2,d3 };
	d->sort(d,3);
	
	for (int i = 0;i < 3;i++) {
		d[i].show();
	}
}