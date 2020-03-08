#define _CRT_SECURE_NO_WARNINGS 1

int findnum(int a[])
{
	int n = 0;
	int count = 0;
	int num;
	while (n < 11)
	{
		if (a[n] != a[n + 1])
		{
			++n;
		}
		else
		{
			if (count == 0)
			{
				num = a[n];
				count++;
			}
			else
			{
				if (num == a[n])
				{
					count++;
				}
				else
				{
					count--;
				}
			}
			++n;
		}
	}
	return num;
}

int main3()
{
	int a[11] = { 1, 2, 3, 2, 2, 2, 4, 4, 2, 5, 2 };
	printf("%d\n", findnum(a));

	system("pause");
	return 0;
}