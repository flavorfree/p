#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void PopSort(int*a, int n)
{
	while (n > 0)
	{
		int flag = 0;
		for (int i = 0; i < n-1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
		n--;
	}
	
}

int main5()
{
	int a[] = { 4, 5, 2, 7, 9, 1, 0, 6, 8, 3 };
	PopSort(a, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}