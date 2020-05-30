#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
//
//注意：给定 n 是一个正整数。

class Solution 
{
public:
	int climbStairs(int n) {
		vector<int> v(n + 4, 0);
		v[1] = 1;
		v[2] = 2;
		v[3] = 3;
		for (int i = 4; i <= n; i++)
		{
			v[i] = v[i - 1] + v[i - 2];
		}

		return v[n];
	}
};

int main()
{
	Solution su;
	while (1)
	{
		int n;
		cin >> n;
		cout << su.climbStairs(n) << endl;
	}

	system("pause");
	return 0;
}