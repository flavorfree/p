#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class A
{
public:
	A(int a)
		:_a(a)
	{}
private:
	int _a;
};
class B
{
public:
	B(int a, int ref)
		:_aobj(a)
		, _ref(ref)
		, _n(10)
	{}
private:
	A _aobj;
	int& _ref;
	const int _n;
};