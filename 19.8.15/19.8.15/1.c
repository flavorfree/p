#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#define ADD(x, y) ((x)+(y))
int main()
{
	int sum = ADD(2, 3);
	printf("sum = %d\n", sum);
	sum = 10 * ADD(2, 3);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}

//int main()
//{
//	printf("%d \n", Add(2, 3));
//	system("pause");
//	return 0;
//}


//void test()
//{
//	static int i = 0; // 1 2 3 4 5   (staic���ξֲ������ı��˱������������ڣ��þ�̬�ֲ�����������������Ȼ���ڣ�������������������ڲŽ���)
//	//int i = 0; // 1 1 1 1 1
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	system("pause");
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("�������������� ��>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d \n", sum);
//
//	//printf("%d \n", strlen("abcdef"));// 6
//
//	//printf("%d \n", strlen("c;\test\328\test.c"));// 14
//
//	system("pause");
//	return 0;
//}