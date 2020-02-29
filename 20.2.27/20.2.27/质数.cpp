#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<math.h>
using namespace std;

int main2()
{
	int i;
	int j;
	int n;
	for (i = 2; i < 100; i++)
	{
		n = 1;
		for (j = 2; j < sqrt(i); j++)
		{
			
			if (i% j == 0)
			{
				n = 0;
				break;
			}
		}
		if (n == 1)
		{
			cout << i <<endl;
		}
	}

	return 0;
}