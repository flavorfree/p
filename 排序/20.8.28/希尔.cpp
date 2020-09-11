#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void ShellSort(int* a, int n)
{
	int num = n;
	while (num > 1)
	{
		num = num % 2 + 1;
		for (int i = 0; i < n-num; i++)
		{
			int end = i;
			int tmp = a[end + num];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + num] = a[end];
					end -= num;
				}
				else
					break;
			}
			a[end + num] = tmp;
		}
	}
}

int main2()
{
	int a[] = { 4, 5, 2, 7, 9, 1, 0, 6, 8, 3 };
	ShellSort(a, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;

}