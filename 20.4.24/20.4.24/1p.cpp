#define _CRT_SECURE_NO_WARNINGS 1

//������������ڣ���������һ��ĵڼ���
#include<iostream>
using namespace std;

int main()
{
	int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, day;
	int date;
	while (cin >> year >> month >> day)//�������Բ��Ͻ������룬ֱ����ctrl+c�ͽ���
	{
		int d = 0;
		for (int i = 1; i<month; i++)//�ۼӡ�1��month-1���µ�����
		{
			d += monthday[i];
		}
		d += day;
		if (month>2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))//�жϸ����Ƿ�Ϊ����
		{
			d++;
		}
		cout << d << endl;
	}
	return 0;
}