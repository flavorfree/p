#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

//给定一个仅包含大小写字母和空格 ' ' 的字符串 s，返回其最后一个单词的长度。
//如果字符串从左向右滚动显示，那么最后一个单词就是最后出现的单词。
//
//如果不存在最后一个单词，请返回 0 。
//
//说明：一个单词是指仅由字母组成、不包含任何空格字符的 最大子字符串。

//class Solution 
//{
//public:
//	int lengthOfLastWord(string s) {
//		if (s.empty())
//			return 0;
//
//		int n = 0;
//		for (int i = s.size() - 1; i >= 0; i--)
//		{
//			if (s[i] != ' ')
//				n++;
//			else if (n != 0)
//				return n;
//		}
//		return n;
//	}
//};
//
//int main()
//{
//	Solution su;
//	while (1)
//	{
//		string s;
//		getline(cin, s);
//
//		cout << su.lengthOfLastWord(s) <<endl;
//	}
//	system("pause");
//	return 0;
//}