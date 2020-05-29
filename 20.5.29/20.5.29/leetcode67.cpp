#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

//给你两个二进制字符串，返回它们的和（用二进制表示）。
//
//输入为 非空 字符串且只包含数字 1 和 0。

//class Solution 
//{
//public:
//	string addBinary(string a, string b) {
//		int lena = a.size();
//		int lenb = b.size();
//		if (lena < lenb)
//		{
//			string tmp = a;
//			a = b;
//			b = tmp;
//			swap(lena, lenb);
//		}
//		if (lena - lenb > 0)
//			b.insert(0, lena - lenb, '0');
//
//		int flag = 0, sum;
//		string s;
//		for (int i = lena - 1; i >= 0; i--)
//		{
//			int la = a[i] - '0';
//			int lb = b[i] - '0';
//			sum = la + lb + flag;
//			if (sum >= 2)
//			{
//				flag = 1;
//				if (sum == 2)
//					sum = 0;
//				else
//					sum = 1;
//			}
//			else
//				flag = 0;
//
//			s.insert(0, 1, sum + '0');
//		}
//		if (flag)
//			s.insert(0, 1, '1');
//
//		return s;
//	}
//};
//
//int main()
//{
//	Solution su;
//	while (1)
//	{
//		string s1;
//		getline(cin, s1);
//		string s2;
//		getline(cin, s2);
//
//		cout << su.addBinary(s1, s2) << endl;
//	}
//
//	system("pause");
//	return 0;
//}