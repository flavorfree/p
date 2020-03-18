#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void Compress(char* str)
{
	int count = 1;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == str[i + 1])
		{
			count++;
		}
		else
		{
			if (count != 1)
				printf("%d", count);
			printf("%c", str[i]);
			count = 1;
		}
		i++;
	}
	printf("\n");
}

int main()
{
	char str[] = "aaabbbbccc";
	Compress(str);
	system("pause");
	return 0;
}