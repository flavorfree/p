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
//	static int i = 0; // 1 2 3 4 5   (staic修饰局部变量改变了变量的生命周期，让静态局部变量出了作用域依然存在，到程序结束，生命周期才结束)
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
//	printf("输入两个操作数 ；>");
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