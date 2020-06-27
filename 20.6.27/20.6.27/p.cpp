#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	int flag = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		flag = 0;
//		for (int j = i + 1; j < s.size(); j++)
//		{
//			if (s[i] == s[j])
//			{
//				flag = 1;
//				s.erase(j--,1);
//			}
//		}
//		if (flag == 0)
//		{
//			cout << s[i] << endl;
//			break;
//		}
//	}
//	if (flag == 1)
//		cout << -1 << endl;
//
//	system("pause");
//	return 0;
//}