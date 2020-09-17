#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m, q;
	cin >> n >> m >> q;
	vector<vector<int>> vvm;
	int num = 0;
	while (num < m)
	{
		vector<int> v;
		int a;
		for (int i = 0; i < 2; i++)
		{
			cin >> a;
			v.push_back(a);
		}

		vvm.push_back(v);
		num++;
	}
	num = 0;
	vector<vector<int>> vvq;
	while (num < q)
	{
		vector<int> v;
		int a;
		for (int i = 0; i < 2; i++)
		{
			cin >> a;
			v.push_back(a);
		}

		vvq.push_back(v);
		num++;
	}

	vector<int> endv;
	int z = vvm[0][0];
	int s = vvm[0][1];
	endv.push_back(z);
	endv.push_back(s);


	for (int j = 1; j < vvm.size(); j++)
	{
		for (int k = 0; k < endv.size(); k++)
		{
			if (endv[k] == vvm[j][0])
			{
				int a = vvm[j][1];
				endv.push_back(a);
			}
			else if (endv[k] == vvm[j][1])
			{
				int b = vvm[j][0];
				endv.push_back(b);
			}
		}
	}

	for (int i = 0; i < vvq.size(); i++)
	{
		int flag = 0;
		for (int j = 0; j < endv.size(); j++)
		{
			if (endv[j] == vvq[i][0] || endv[j] == vvq[i][1])
			{
				flag++;
			}
		}
		if (flag == 2)
			cout << "YES" << endl;
	}
	
	system("pause");
	return 0;
}