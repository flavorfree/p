#define _CRT_SECURE_NO_WARNINGS 1


//将字符串中的空格替换为%20，例："a b c d"转换为"a%20b%20c%20d" 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Change(char* a, int len)
{
	int n = 0;
	int k = 0;
	while (a[k] != '\0')
	{
		if (a[k] == ' ')
		{
			n++;
		}
		k++;
	}
	n = len + n * 2;
	--n;
	--len;
	while (n >= 0)
	{
		if (a[len] == ' ')
		{
			a[n--] = '0';
			a[n--] = '2';
			a[n--] = '%';
		}
		else
		{
			a[n] = a[len];
			n--;
		}
		len--;
	}
}

int main1()
{
	char a[30] = "a b c d";
	int len = strlen(a);
	Change(a,len);

	puts(a);
	system("pause");
	return 0;
}