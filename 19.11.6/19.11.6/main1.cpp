#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	getline(cin, s1);//���ﲻ����cin���գ���Ϊcin�����ո�ͽ����ˡ�
	getline(cin, s2);

	int hashtable[256] = { 0 };
	for (size_t i = 0; i < s2.size(); i++)
	{
		hashtable[s2[i]]++; // ʹ�ù�ϣӳ��˼����s2ͳ���ַ����ֵĴ���
	}
	string ret;
	for (size_t i = 0; i < s1.size(); ++i)
	{
		if (hashtable[s1[i]] == 0)// ����str1��str1[i]ӳ��hashtable��Ӧλ��Ϊ0�����ʾ����ַ���str2��û�г��ֹ�������+=��ret��
			ret += s1[i];
	}
	cout << ret << endl;
	system("pause");
	return 0;
}