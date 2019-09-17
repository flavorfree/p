#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//类
class ct
{
public:
	int a;
	double b;
	char c;
	void printA()
	{
		printf("%d\n", a);
	}

	void printB()
	{
		printf("%d\n", a);
	}
};

int main1 ()
{
	ct c;//实例化对象
	c.a = 4;
	c.printA();

	cout << sizeof(ct) << endl;

	system("pause");
	return 0;
}