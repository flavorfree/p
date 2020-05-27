#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//����һ���������� nums ���ҵ�һ���������͵����������飨���������ٰ���һ��Ԫ�أ������������͡�

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int fnum = nums[0];
		int sum = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (sum > 0)
				sum += nums[i];
			else
				sum = nums[i];

			fnum = max(fnum, sum);
		}

		return fnum;
	}
};

int main()
{
	Solution su;

	int v1[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	vector<int> v;
	for (int i = 0; i < sizeof(v1) / sizeof(int); i++)
	{
		v.push_back(v1[i]);
	}

	cout << su.maxSubArray(v) << endl;

	system("pause");
	return 0;
}