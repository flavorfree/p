#define _CRT_SECURE_NO_WARNINGS 1

union UN
{
	int i;
	char c;
	
};

union UN un;

int main()
{
	printf("%d\n", sizeof(un));//���ϵĳ�Ա�ǹ���һ���ڴ��С�����ϱ�����С����������Ա�Ĵ�С;
	printf("%d\n", &(un.i));
	printf("%d\n", &(un.c));
	
	system("pause");
	return 0;
}