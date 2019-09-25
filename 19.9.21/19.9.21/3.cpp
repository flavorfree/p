#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class String
{
public:
	String(const char* str = "jack")
	{
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}
	~String()
	{
		cout << "~String()" << endl;
		free(_str);
	}
private:
	char* _str;
};

//class Person
//{
//private:
//	String _name;
//	int _age;
//};

int main3()
{
	String s1("hello");
	String s2(s1);

	system("pause");
	return 0;
}