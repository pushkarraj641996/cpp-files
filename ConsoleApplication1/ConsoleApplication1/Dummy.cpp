#include<iostream>
using namespace std;
int main()
{
	int a[50], i, j, k = 0, count = 0, m, n, flag;
	cout << "Enter the value of m and n : ";
	cin >> m >> n;
	for (i = m;i <= n;i++)
	{
		flag = 0;
		if (i == 2)
		{
			flag = 0;
			break;
		}
		else
		{
			for (j = 2;j < i;j++)
			{
				if (i % j == 0)
				{
					flag = 1;
					break;
				}

			}
		}
		if (flag == 0)
		{
			a[k] = i;
			k++;
			cout << i << " ";
		}

	}
	int sexycount = 0;
	for (int i = 0;i < k-1;i++) {
		if (a[i + 1] - a[i] == 6) {
			sexycount++;
		}
	}
	cout << endl << sexycount;
}