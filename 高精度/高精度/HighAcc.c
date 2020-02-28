#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

typedef struct{
	char data[1000];
	int len;
}HighAcc;

HighAcc mul(HighAcc a, HighAcc b)//高精度乘
{
	HighAcc sum = { 0 };
	int i,j;
	int tmp;

	if (a.len == 1 && a.data[0] == 0 || b.len == 1 && b.data[0] == 0)//判断两个数是否有一个是0
	{
		sum.len = 1;
		return sum;
	}

	for (i = 0; i < a.len; i++)
	{
		for (j = 0; j < b.len; j++)
		{
			tmp = a.data[i] * b.data[j] + sum.data[i + j];
			sum.data[i + j] = tmp % 10;
			sum.data[i + j + 1] += tmp / 10;//和加法的区别，为了不覆盖上一个数，所以用+=
		}
	}
	sum.len = a.len + b.len - !sum.data[a.len + b.len - 1];
	return sum;
}

HighAcc add(HighAcc a, HighAcc b)//高精度加
{
	HighAcc sum = { 0 };
	int i;
	int tmp;
	int maxlen = a.len > b.len ? a.len : b.len;//找出最长的数字位数

	for (i = 0; i < maxlen; i++)
	{
		tmp = a.data[i] + b.data[i] + sum.data[i];//加对应位的两个数+进位的数
		sum.data[i] = tmp % 10;
		sum.data[i + 1] = tmp / 10;	//进位，最大为1，反之为0
	}
	sum.len = maxlen + sum.data[maxlen];//数组长度，看最后时候有进位，有则加1
	return sum;
}

void dealNumber(HighAcc* h)
{
	int i = 0, j = strlen(h->data) - 1;
	char tmp;

	h->len = j + 1;

	for (; i <=  j; i++, j--)//将字符串反转的同时并将字符转化为数字
	{
		tmp = h->data[i];
		h->data[i] = h->data[j] - '0';
		h->data[j] = tmp - '0';
	}
}

void printNumber(HighAcc h)
{
	int i;
	for (i = h.len - 1; i >= 0; i--)
	{
		putchar(h.data[i] + '0');//再将数字转化为字符输出；
	}
}

int main()
{ 
	HighAcc a = { 0 };
	HighAcc b = { 0 };
	HighAcc sum ;
	int i;

	scanf("%s%s", a.data, b.data);
	dealNumber(&a);
	dealNumber(&b);

	sum = mul(a, b);

	printNumber(sum);
	putchar('\n');

	system("pause");
	return 0;
}