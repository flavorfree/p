#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N, f, l = 0, r = 0, f0 = 0, f1 = 1;
	cin >> N;
	while (1)
	{
		f = f0 + f1;
		f0 = f1;
		f1 = f;
		if (f < N) //�ҵ���NС�Ҿ���N����������������
		{
			l = N - f;
		}
		else//�ҵ���N���Ҿ���N���������������� 
		{
			r = f - N;
			break;
		}
	}
	cout << min(l, r) << endl;//ȡ��С����
	return 0; 
}