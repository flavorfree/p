#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
using namespace std;

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << rand()%100+1 << endl;
	}
	system("pause");
	return 0;

}