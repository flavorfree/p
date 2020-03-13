#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void DeleteChars(char* str1, char* str2)
{
	if (str1 == NULL)
		return NULL;
	int length = strlen(str1);
	// 遍历str，删除和toBeDelete相等的字符
	for (int i = 0; str1[i] != '\0' && i<length; i++)
	{
		// 如果相等则用后面的元素进行覆盖
		if (str1[i] == str2)
		{
			int j = i;
			for (; str1[j] != '\0'&&j<length - 1; j++)
				str1[j] = str1[j + 1];
			str1[j] = '\0';
		}
	}
	return;
}

int main()
{
	char str1[] = "they are students";
	char str2[] = "aeiou";
	for (int i = 0; i < strlen(str2); i++)
	{
		DeleteChars(str1, str2[i]);
	}

	for (int n = 0; n < strlen(str1); n++)
	{
		printf("%caa", str1[n]);
	}
	system("pause");
	return 0;
}