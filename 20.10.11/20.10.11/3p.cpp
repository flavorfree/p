#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main3()
{
	int a;
	while (cin >> a)
	{
		int n;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		int end = 0;
		for (int i = 0; i < n; i++)
		{
			int sum = v[i];
			for (int j = i + 1; j != i; j++)
			{
				if (j >= n)
					j %= n;
				if (j == i)
					break;
				if (sum < 0)
					break;
				sum += v[j];
				end = max(end, sum);
			}
			
		}
		cout << end << endl;
	}
	return 0;
}