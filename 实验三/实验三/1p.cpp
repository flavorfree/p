#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main1()
{
	int r;
	cout << "请输入游泳池半径：" ;
	cin >> r;

	double fenceprice;//栅栏价格
	fenceprice = 2 * r*3.14 * 35;//659.4
	double aislearea;//过道面积大小
	double aisleprice;//过道价格
	aislearea = 2 * 3.14*((r + 3)*(r + 3) - r*r);
	aisleprice = aislearea * 20;
	cout << "泳池过道造价：" << aisleprice << endl;
	cout << "泳池栅栏造价：" << fenceprice << endl;

	system("pause");
	return 0;
}