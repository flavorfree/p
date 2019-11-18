#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

//求连续最大和

int main1()
{
	int size;
	cin >> size;
	vector<int> nums(size);
	for (size_t i = 0; i < size; ++i)
	{
		cin >> nums[i];
	}

	int result = nums[0];
	int suml = 0, sum2 = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		// 计算到num[i]的子数组的最大和
		sum2 = suml >= 0 ? suml + nums[i] : nums[i];
		if (sum2 > result)
			result = sum2;
		if (sum2 < 0)
			sum2 = 0;

		suml = sum2;
	}

	cout << result << endl;

	system("pause");
	return 0;
}