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

	if (m < 0)// 如果是负数，则转成正数，并标记一下
	{
		m = 0 - m;
		flag = true;
	}

	while (m)// 按进制换算成对应的字符添加到s
	{
		s += table[m%n];
		m /= n;
	}

	if (flag)
		s += '-';

	reverse(s.begin(), s.end());//反转字符串s，将数字m变成n进制
	cout << s << endl;

	system("pause");
	return 0;
}