#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
////给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
////
////有效字符串需满足：
////
////左括号必须用相同类型的右括号闭合。
////左括号必须以正确的顺序闭合。
////注意空字符串可被认为是有效字符串。
//
//
//class Solution 
//{
//public:
//	bool isValid(string s) 
//	{
//		vector<char> v;
//		int j = 0;
//		for (int i = 0; i<s.size(); i++)
//		{
//			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
//			{
//				v.push_back(s[i]);
//				j++;
//			}
//			else
//			{
//				if (v.empty())
//					return false;
//
//				if (s[i] == ')')
//					s[i] = '(';
//				else if (s[i] == '}')
//					s[i] = '{';
//				else if (s[i] == ']')
//					s[i] = '[';
//
//				if (j > 0 && v[j - 1] == s[i])
//				{
//					v.pop_back();
//					j--;
//				}
//				else
//					return false;
//			}
//		}
//		return v.empty();
//	}
//};
//
//int main()
//{
//	Solution a;
//
//	string s;
//	while (1)
//	{
//		getline(cin, s);
//		cout << a.isValid(s) << endl;;
//	}
//	
//
//	system("pause");
//	return 0;
//}