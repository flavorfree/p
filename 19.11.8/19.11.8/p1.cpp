#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str, r, cur;
	cin >> str;
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			cur += str[i]; // 数字+=到cur
		}
		else// 找出更长的字符串，则更新字符串 
		{
			if (r.size() < cur.size())
			{
				r = cur;
			}
			else
				cur.clear();
		}
	}

	cout << r << endl;
	
	system("pause");
	return 0;
}