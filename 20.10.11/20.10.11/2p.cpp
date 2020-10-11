#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2;
	
	while (1)
	{
		v1.clear();
		v2.clear();
		for (int i = 0; i<4; i++)
		{
			int a;
			cin >> a;
			v1.push_back(a);
		}
		for (int i = 0; i<2; i++)
		{
			int a;
			cin >> a;
			v2.push_back(a);
		}
		int a = min(v1[2], v1[3]);
		int b = max(v1[2], v1[3]);
		int x = min(v2[0], v2[1]);
		int y = max(v2[0], v2[1]);
		int flag = 0;
		if (v1[0] < 2)
		{
			flag = 0;
		}
		else
		{
			if (a==x && b==y )
			{
				flag = 1;
			}
			else if (a==x || b==y)
			{
				if (v1[0] >= 3)
				{
					flag = 1;
				}
				else
				{
					flag = 0;
				}
			}
			else
			{
				
				if (v1[0] >= 4 && x > a && y < b)
				{
					flag = 1;
				}
				else
					flag = 0;
			}
		}
		if (flag == 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;


	}
	return 0;
}