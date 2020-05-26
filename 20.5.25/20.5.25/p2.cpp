#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

//实现 strStr() 函数。
//
//给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 
//字符串出现的第一个位置(从0开始)。如果不存在，则返回  - 1。

class Solution 
{
public:
	int strStr(string haystack, string needle)
	{
		int i = 0, j = 0;
		while (haystack[i] != '\0' && needle[j] != '\0')
		{
			if (needle[j] == haystack[i])
			{
				i++, j++;
			}
			else    //i+1,j=0
			{
				i = i - j + 1;
				j = 0;
			}
		}
		if (j == needle.size())
			return i - j;
		else
			return -1;
	}
};

int main()
{
	Solution su;

	while (1)
	{
		string s1;
		getline(cin, s1);
		string s2;
		getline(cin, s2);

		cout << su.strStr(s1, s2) << endl;
	}
	

	system("pause");
	return 0;
}