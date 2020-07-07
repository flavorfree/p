#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

void oddInOddEvenInEven(vector<int>& arr, int len) {
	for (int i = 0; i < len; i++)
	{
		int j = i;
		if (i % 2 == 0)
		{
			while (arr[j] % 2 == 1)
				j++;
			int tmp = arr[j];
			arr[j] = arr[i];
			arr[i] = tmp;

		}
		else
		{
			while (arr[j] % 2 == 0)
				j++;
			int tmp = arr[j];
			arr[j] = arr[i];
			arr[i] = tmp;
		}
	}
}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	int len = v.size();
	oddInOddEvenInEven(v, len);

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}