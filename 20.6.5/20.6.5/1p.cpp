#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

//一个字符串不同位置插入字符串，看构成几个回文数

//int judge(string ss)
//{
//	for (int i = 0, j = ss.size() - 1; i < j; i++, j--)
//	{
//		if (ss[i] != ss[j])
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	int i = 0;
//	int tmp = 0;
//	string s3 = s1;
//	for (i; i < s3.size(); i++)
//	{
//		string ss;
//		ss.clear();
//		
//		s1 = s3;
//		ss.resize(s1.size() + s2.size());
//		ss = s1.insert(i, s2);
//		if (judge(ss) == 1)
//		{
//			tmp++;
//		}
//	}
//
//	cout << tmp << endl;
//
//	system("pause");
//	return 0;
//}