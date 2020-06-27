#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> gifts;
	int n = 9;
	gifts = { 3,1, 2, 3, 2, 2 ,3 ,3, 3};
	int a[10] = { 0 };
	for (int i = 0; i < n; i++)
	{
		a[gifts[i]]++;
	}
	int j = 0;
	n /= 2;
	while (j < 10)
	{
		
		if (a[j] > n)
			cout << j << endl;
		j++;
	}
	//cout << 0 << endl;
	system("pause");
	return 0;
}