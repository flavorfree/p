#define _CRT_SECURE_NO_WARNINGS 1

//����10������Ԫ�ص�������ð�����򷨰���С�����������У�

//#include<stdio.h>
//#include<stdlib.h>
//
//Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//void BubbleSort(int* a, int n)
//{
//	while (n)
//	{
//		int start = 0;
//		for (start; start<n - 1; start++)
//		{
//			if (a[start] > a[start + 1])
//			{
//				Swap(&a[start], &a[start + 1]);
//			}
//		}
//		n--;
//		
//	}
//}
//
//int main()
//{
//	int a[] = { 0, 9, 3, 7, 4, 6, 5, 8, 2, 1 };
//	BubbleSort(a, sizeof(a) / sizeof(int));
//	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	system("pause");
//	return 0;
//}