#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	getline(cin, s1);//这里不能用cin接收，因为cin遇到空格就结束了。
	getline(cin, s2);

	int hashtable[256] = { 0 };
	for (size_t i = 0; i < s2.size(); i++)
	{
		hashtable[s2[i]]++; // 使用哈希映射思想先s2统计字符出现的次数
	}
	string ret;
	for (size_t i = 0; i < s1.size(); ++i)
	{
		if (hashtable[s1[i]] == 0)// 遍历str1，str1[i]映射hashtable对应位置为0，则表示这个字符在str2中没有出现过，则将他+=到ret。
			ret += s1[i];
	}
	cout << ret << endl;
	system("pause");
	return 0;
}