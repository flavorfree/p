#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main1()
{
	int n, x;
	while (cin >> n >> x)
	{
		vector<int> v;
		for (int i = 0; i<n; i++)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		x = n - x;
		int num = 0;
		for (int i = x + 1; i<n; i++)
		{
			if (v[i] != 0 && v[i] >= v[x])
				num++;
		}
		cout << num << endl;
	}
	return 0;
}