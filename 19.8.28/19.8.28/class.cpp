#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//��
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
	ct c;//ʵ��������
	c.a = 4;
	c.printA();

	cout << sizeof(ct) << endl;

	system("pause");
	return 0;
}