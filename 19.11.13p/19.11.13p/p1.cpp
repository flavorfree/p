#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N, f, l = 0, r = 0, f0 = 0, f1 = 1;
	cin >> N;
	while (1)
	{
		f = f0 + f1;
		f0 = f1;
		f1 = f;
		if (f < N) //找到比N小且距离N最近的数，求出距离
		{
			l = N - f;
		}
		else//找到比N大且距离N最近的数，求出距离 
		{
			r = f - N;
			break;
		}
	}
	cout << min(l, r) << endl;//取最小距离
	return 0; 
}