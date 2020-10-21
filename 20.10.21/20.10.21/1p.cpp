#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

int main1()
{
	string s;
	while (getline(cin, s))
	{
		vector<int> v;
		int i = 0;
		while (s[i] >= '0' && s[i] <= '9')
		{
			v.push_back(s[i] - '0');
			++i;
		}
		i = s.size() - 1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			v.push_back(s[i] - '0');
			--i;
		}
		for (int a = 0; a<v.size(); a++)
			cout << v[a];
		cout << endl;
	}
	return 0;

}