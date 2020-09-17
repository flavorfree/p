#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

int main1()
{
	int n = 5;
	int v = 4;
	vector<int> a = { 1, 2, 4, 4, 5 };
	int i = 0, j = n - 1;
	while (i <= j)
	{
		int mid = (i + j) / 2;
		if (a[mid] == v)
		{
			i = mid;
			break;
		}
			

		if (a[mid] < v)
			i = mid;
		else if (a[mid] > v)
			j = mid;
	}
	while (a[i] == v)
		i--;

	if (a[++i] == v)
		cout << i+1 << endl;
	else
		cout << -1 << endl;

	system("pause");
	return 0;
}