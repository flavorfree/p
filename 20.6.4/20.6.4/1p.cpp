#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//找出最长的连续字符串

int main()
{
	string s1;
	getline(cin, s1);
	int i = 0;
	int start = 0;
	int len = 0;
	string s2;
	while (i < s1.size())
	{

		int start = i;
		while (i < s1.size() - 1 && s1[i] + 1 == s1[i + 1])
			i++;
		int l = i - start;

		if (len <= l)
		{
			s2.clear();
			for (int j = start; j <= i; j++)
			{
				s2 += s1[j];
			}
		}
		len = max(len, l);
		i++;
	}
	cout << s2 << endl;

	system("pause");
	return 0;
}