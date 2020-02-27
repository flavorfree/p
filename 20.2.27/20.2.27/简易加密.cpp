#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main1()
{
	char c;	//原字母
	char ec;	//加密后的字母
	int k;	//密钥k
	cout << "请输入密钥k:" << endl;
	cin >> c >> k;
	ec = ((c - 'a') + k) % 26 + 'a';
	cout << ec << endl;

	return 0;
}