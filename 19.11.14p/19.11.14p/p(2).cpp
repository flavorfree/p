#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//��С������ = ����֮���������Լ��������ʹ����ת������������Լ������⣺
//��a��b�� ���Լ������ת��Ϊa��b֮�������Ϊ����֮����С����֮��Ĺ�Լ����
//���Զ������������ �������������ֱ࣬������Ϊ0������ķ�ĸ��Ϊ�����


int gcd(int a, int b)
{
	int r;
	while(r = a%b)
	{
		a = b;
		b = r;
	}
	return b;
}

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a*b / gcd(a, b) << endl;
	}
	return 0;
}