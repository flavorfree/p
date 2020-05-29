#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

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