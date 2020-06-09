#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Container
{
protected:
	double radius;
public:
	Container(double radius)
	{
		Container::radius = radius;
	}
	virtual double surface() = 0;           //纯虚函数
	virtual double volume() = 0;            //纯虚函数
};

//定义球体类
class Sphere :public Container
{
public:
	Sphere(double radius) :Container(radius)
	{};
	double surface()
	{
		return 4 * 3.1416*radius*radius;
	}
	double volume()
	{
		return radius*radius*radius * 4 / 3 * 3.1416;
	}
};

//定义圆柱体类
class Cylinder :public Container
{
	double height;
public:
	Cylinder(double radius, double height) :Container(radius)
	{
		Cylinder::height = height;
	};
	double surface()
	{
		return 2 * 3.1416*radius*(height + radius);
	}
	double volume()
	{
		return radius*radius*height * 3.1416;
	}
};

int main()
{
	Container *p;                       //定义抽象类指针p
	Sphere obj2(1);                     //创建球体对象obj2
	Cylinder obj3(1, 1);                //创建圆柱体对象obj3

	p = &obj2;                          //指针p指向球体对象obj2
	cout << "球体表面积：" << p->surface() << endl;
	cout << "球体体积：" << p->volume() << endl;

	p = &obj3;                          //指针p指向圆柱体对象obj3
	cout << "圆柱体表面积：" << p->surface() << endl;
	cout << "圆柱体体积：" << p->volume() << endl;

	system("pause");
	return 0;
}
