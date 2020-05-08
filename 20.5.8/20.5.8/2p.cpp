#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(5);

	int val;
	for (size_t i = 0; i < nums.size(); i++)
	{
		val ^= nums[i];
	}

	int bit;
	for (int i = 0; i < 32; i++)
	{
		int a = val >> i;
		if (a & 1)
		{
			bit = i;
			break;
		}
	}

	size_t val1, val2;
	for (size_t i = 0; i < nums.size(); i++)
	{
		if ((nums[i] >> bit) & 1)
			val1 = val ^ nums[i];
		else
			val2 = val ^ nums[i];
	}

	vector<int> v1;
	v1.push_back(val1);
	v1.push_back(val2);

	for (size_t i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}