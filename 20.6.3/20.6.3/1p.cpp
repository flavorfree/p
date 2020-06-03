#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

//讲一句话的单词进行倒置，标点符号不倒置
//如：i like beijing.  变化后  beijing. like i

//int main()
//{
//	while (1)
//	{
//		string s1;
//		getline(cin, s1);
//		string s2;
//		int flag = s1.size();
//		for (int i = s1.size() - 1; i >= 0; i--)
//		{
//			if (s1[i] == ' ')
//			{
//				for (int j = i + 1; j < flag; j++)
//				{
//					s2 += s1[j];
//				}
//				s2 += ' ';
//				flag = i;
//			}
//		}
//		int i = 0;
//		while (flag)
//		{
//			s2 += s1[i++];
//			flag--;
//		}
//		cout << s2 << endl;
//	}
//	
//
//	system("pause");
//	return 0;
//}