#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

//һ���ַ����У�������ظ����ַ���ɾ�������ظ����ַ�

int main2()
{
	char s1[101] = { 0 };
	cin >> s1;
	string src(s1); 
	string s2; 
	for (auto & ch:src)
	{
		if (s2.find(ch) == -1)
		{
			s2.push_back(ch);
		}
	}
	cout << s2 << endl;
	system("pause");
	return 0;
}