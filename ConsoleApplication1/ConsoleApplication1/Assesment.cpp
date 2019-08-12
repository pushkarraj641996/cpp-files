#include<iostream>
#include<fstream>
#include<cstring>
#include<string>

using namespace std;


class rental {
	string car_id;
	string car_name;
	string car_type;
	string price_per_hour;

	string cust_id;
	string  cust_name;
	string cust_addr;

	string buffer1[3][4];
	string buffer2[2][3];
	string buffer;

	int rentid = 1000;

	fstream f1, f2, f3, f4;
public:

	rental(string cid) {
		f1.open("cars.txt", ios::in | ios::out);
		f2.open("customer.txt", ios::in | ios::out);
		f3.open("rental.csv", ios::out || ios::app);

		bool flag = false;
		while (!f2.eof()) {
			for (int i = 0;i < 2;i++) {
				for (int j = 0;j < 3;j++) {
					getline(f2, buffer2[i][j], '#');
				}
			}
		}
		for (int i = 0;i < 2;i++) {
			for (int j = 0;j < 3;j++) {
				if (buffer2[i][0] == cid) {
					flag = true;
					this->cust_id = buffer2[i][j];
					this->cust_name = buffer2[i][j + 1];
					this->cust_addr = buffer2[i][j + 2];
					break;
				}
			}
		}

		if (flag == false) {
			cout << "Invalid Customer ID: " << this->cust_id << endl;
			exit(0);
		}
	}

	void car_types(string ctype) {
		string select;
		bool flag1 = false;
		bool flag2 = false;

		cout << "ID\tName\t\tType\tPrice/h\n";
		
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 4;j++) {
				getline(f1, buffer1[i][j], '#'); 
			}
		}

		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 4;j++) {
				if (buffer1[i][j] == ctype) {
					cout << buffer1[i][0] << "\t" << buffer1[i][1] <<"\t" << buffer1[i][2] << "\t" << buffer1[i][3] << endl;
					flag1 = true;
				}
			}
		}

		if (flag1 == false) {
			cout << "Invalid Car Type !!! ";
			exit(-1);
		}

		cout << "Select Car ID: ";
		cin >> select;
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 4;j++) {
				if (buffer1[i][j] ==  select) {
					this->car_id = select;
		   			this->car_name = buffer1[i][j + 1];
					this->car_type = buffer1[i][j + 2];
					this->price_per_hour = buffer1[i][j + 3];
					flag2 = true;
					break;
				}
			}
		}

		if (flag2 == false) {
			cout << "Invalid car ID Selection !!!";
			exit(-1);
		}
	}

	void fare(double dur) {
		double total;
		string price = this->price_per_hour;
		double p;

		p = stoi(price);
	
		total = p * dur;

		cout << "Fare: Rs." << total;
		rentid++;

		f3 << rentid << "#" << cust_id << "#" << car_id << "#" << total << "#" << "\n";
	}

	~rental() {
		f1.close();
		f2.close();
	}

};

int main() {

	int ch;
	string cid, ctype;
	int s_hours, s_min, s_sec, e_hours, e_min, e_sec;

	float dur;

	cout << "----------WELCOME TO CAR RENTAL SYSTEM----------------" << endl;
	cout << "\n1.Book a car"
		<< "\n2.Exit\n";
	cin >> ch;

	switch (ch) {
	case 1: cout << "Enter customer id: ";
		cin >> cid;

		rental* obj = new rental(cid);

		cout << "Enter car type to rent: ";
		cin >> ctype;

		obj->car_types(ctype);

		cout << "\nEnter start time(hh mm ss)(24 hour format):\n";
		cin >> s_hours >> s_min >> s_sec;

		cout << "\nEnter end time:(hh mm ss)(24 hour format): \n ";
		cin >> e_hours >> e_min >> e_sec;

		dur = ((e_hours - s_hours) + ((e_min - s_min) / 60) + ((e_sec - s_sec) / 3600));
		obj->fare(dur);
	}
}