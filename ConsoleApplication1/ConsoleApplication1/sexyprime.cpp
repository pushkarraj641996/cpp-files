#include<iostream>

using namespace std;

int main(){
	
	int x[100];
	int counter = 0;

	int sexycount = 0;

	int a, b, i, j, flag;
 
	cout << "Enter lower bound of the interval: ";
	cin >> a;


	cout << "\nEnter upper bound of the interval: ";
	cin >> b; 


	cout << "\nPrime numbers between "
	<< a << " and " << b << " are: ";

	for (i = a; i <= b; i++)
	{
		
		if (i == 1 || i == 0)
			continue;

		flag = 1;

		for (j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			cout << i << " ";
			x[counter] = i;
			counter++;
		}
	}

	cout << endl;
	for (int k = 1;k < counter;k++) {
		if (x[k] - x[k - 1] == 6) {
			sexycount++;
		}
	}

	cout << endl << "Sexy Prime Count: " << sexycount;
	return 0;
}