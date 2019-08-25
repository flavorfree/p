#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;//¿ÉÒÔÊ¡ÂÔstd::
#include "t1.h"
using namespace t1;

namespace test
{
	namespace n1
	{
		int add(int a, int b)
		{
			std::cout << "1\n";
			return a + b;
		}
	}
	namespace n2
	{
		int add(int a, int b)
		{

			cout << "2\n";
			return a + b;
		}
	}
}
namespace n2
{
	int add(int a, int b)
	{

		cout << "2\n";
		return a + b;
	}
}
namespace n2
{
	int sub(int a, int b)
	{

		cout << "4\n";
		return a - b;
	}
}
int main1()
{
	cout << t1::add(2, 3);

	system("pause");
	return 0;
}
