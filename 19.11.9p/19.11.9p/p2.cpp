#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s, table = "0123456789ABCDEF";
	int m, n;
	cin >> m >> n;
	bool flag = false;

	if (m < 0)// ����Ǹ�������ת�������������һ��
	{
		m = 0 - m;
		flag = true;
	}

	while (m)// �����ƻ���ɶ�Ӧ���ַ���ӵ�s
	{
		s += table[m%n];
		m /= n;
	}

	if (flag)
		s += '-';

	reverse(s.begin(), s.end());//��ת�ַ���s��������m���n����
	cout << s << endl;

	system("pause");
	return 0;
}