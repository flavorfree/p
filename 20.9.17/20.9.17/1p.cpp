#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

int main1()
{
	int n, m;
	while (cin >> n >> m)
	{
		vector<vector<int>> vv;
		int num = 0;
		while (num < n)
		{
			vector<int> v;
			for (int i = 0; i < 3; i++)
			{
				int a;
				cin >> a;
				v.push_back(a);
			}
			vv.push_back(v);
			num++;
		}
		int end = 0;
		while (m > 0)
		{
			int max = 0;
			for (int i = 0; i < vv.size() - 1; i++)
			{
				if (vv[i][2] < vv[i + 1][2])
					max = i + 1;
			}
			while (m > 0 && m >= vv[max][1] && vv[max][0] > 0)
			{
				end += vv[max][2];
				vv[max][0]--;
				m -= vv[max][1];
			}
			vv[max][0] = vv[max][1] = vv[max][2] = 0;
		}

		cout << end << endl;
	}
	
	return 0;
}