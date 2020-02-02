#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string st1, st2;
	cin >> st2;
	while (cin >> st2)
		st2 = st1 + " " + st2;

	cout << st2 << endl;

	system("pause");

	return 0;
}