#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main1()
{
	char c;	//ԭ��ĸ
	char ec;	//���ܺ����ĸ
	int k;	//��Կk
	cout << "��������Կk:" << endl;
	cin >> c >> k;
	ec = ((c - 'a') + k) % 26 + 'a';
	cout << ec << endl;

	return 0;
}