#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int i, x, y;
	i = x = y = 0;
	do{
		++i;
		if (i % 2)
		x += 1;
		i++;
		y += i++;
	} while (i <= 7);
	printf("%d %d %d", i, x, y);
	system("pause");
	return 0;
}