#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//void InsertSort(int* a, int n)
//{
//	int end = 1;
//	for (end; end < n; end++)
//	{
//		int i = end;
//		int num = a[end];
//		for (int j = end-1; j >= 0; j--,i--)
//		{
//			if (a[j] > a[i])
//				swap(a[j], a[i]);
//		}
//	}
//}

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end+1] = tmp;
	}
}

int main1()
{
	int a[] = { 4, 5, 2, 7, 9, 1, 0, 6, 8, 3 };
	InsertSort(a, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}