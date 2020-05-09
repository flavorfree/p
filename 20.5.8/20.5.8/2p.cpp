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

	int val = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		val ^= nums[i];
	}

	int bit = val & (~(val - 1));

	vector<int> v1(2);

	for (auto i : nums)
	{
		if (i & bit)
			v1[0] ^= i;
		else
			v1[1] ^= i;
	}

	for (size_t i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}