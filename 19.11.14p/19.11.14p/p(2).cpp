#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//最小公倍数 = 两数之积除以最大公约数，这里使用碾转相除法进行最大公约数的求解：
//即a与b的 最大公约数可以转化为a、b之间的余数为两者之间最小的数之间的公约数。
//所以对于输入的两个 数进行连续求余，直到余数为0，求余的分母即为结果。


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