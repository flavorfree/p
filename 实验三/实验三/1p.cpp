#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main1()
{
	int r;
	cout << "��������Ӿ�ذ뾶��" ;
	cin >> r;

	double fenceprice;//դ���۸�
	fenceprice = 2 * r*3.14 * 35;//659.4
	double aislearea;//���������С
	double aisleprice;//�����۸�
	aislearea = 2 * 3.14*((r + 3)*(r + 3) - r*r);
	aisleprice = aislearea * 20;
	cout << "Ӿ�ع�����ۣ�" << aisleprice << endl;
	cout << "Ӿ��դ����ۣ�" << fenceprice << endl;

	system("pause");
	return 0;
}