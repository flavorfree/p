#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//int main() 
//{
//	int a = 10; 
//	int& ra = a;
//
//	cout << "&a = " << &a << endl; 
//	cout << "&ra = " << &ra << endl;
//
//	system("pause");
//	return 0;
//}
//
//int TestAuto()
//{ 
//	return 10;
//}
//
//int main()
//{
//	int a = 10; 
//	auto b = a; 
//	auto c = 'a'; 
//	auto d = TestAuto();
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	return 0; 
//}

int main5()
{
	int x = 10; 
	auto a = &x;
	auto* b = &x;
	auto& c = x;

	cout << typeid(a).name() << endl; 
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;

	*a = 20;
	*b = 30;
	c = 40;

	return 0;
}

