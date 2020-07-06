#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		cout << num << " = ";
		int n = 2;
		while (num != 1)
		{
			if (num % n == 0)
			{
				cout << n;
				num = num / n;
				if (num != 1)
					cout << " * ";
			}
			else
				n++;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}