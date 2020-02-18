#define _CRT_SECURE_NO_WARNINGS 1

union UN
{
	int i;
	char c;
	
};

union UN un;

int main()
{
	printf("%d\n", sizeof(un));//联合的成员是公用一块内存大小，联合变量大小至少是最大成员的大小;
	printf("%d\n", &(un.i));
	printf("%d\n", &(un.c));
	
	system("pause");
	return 0;
}