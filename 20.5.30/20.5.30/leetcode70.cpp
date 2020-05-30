#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

//������������¥�ݡ���Ҫ n ������ܵ���¥����
//
//ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�
//
//ע�⣺���� n ��һ����������

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