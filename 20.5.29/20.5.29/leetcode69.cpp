#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//计算并返回 x 的平方根，其中 x 是非负整数。
//
//由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

class Solution 
{
public:
	int mySqrt(int x) {
		if (x == 0 || x == 1)
			return x;

		int low = 0;
		int high = x;
		while (high - low != 1)
		{
			int mid = (low + high) / 2;
			if (x / mid == mid)
				return mid;
			else if (x / mid < mid)
				high = mid;
			else
				low = mid;
		}
		return low;
	}
};

int main()
{
	Solution su;
	while (1)
	{
		int n;
		cin >> n;
		cout << su.mySqrt(n) << endl;
	}
	system("pause");
	return 0;
}