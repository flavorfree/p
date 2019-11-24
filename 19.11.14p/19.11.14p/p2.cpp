#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//求两数的最小公倍数

int main()
{
	int a, b;
	int	i = 2;
	int cur;
	cin >> a;
	cin >> b;
	while( i <= a || i <= b)
	{
		if (a % i == 0 && b % i == 0)
			break;
		else
			i++;
	}
	if (i > a || i > b)
		i = 1;

	cur = a * b / i;

	cout << cur << endl;

	system("pause");
	return 0;
}