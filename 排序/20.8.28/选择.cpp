#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//void ChooseSort(int* a, int n)
//{
//	
//	for (int i = 0; i < n; i++)
//	{
//		int min = i;
//		for (int j = i; j < n; j++)
//		{
//			if (a[min] > a[j])
//				min = j;
//		}
//		swap(a[i], a[min]);
//	}
//	
//}

void ChooseSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int min = begin, max = end;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] > a[max])
				max = i;
			if (a[i] < a[min])
				min = i;
		}
		swap(a[begin], a[min]);
		if (a[max] > a[min])
			swap(a[max], a[end]);
		begin++;
		end--;
	}
}

int main3()
{
	int a[] = { 4, 5, 2, 7, 9, 1, 0, 6, 8, 3 };
	ChooseSort(a, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}