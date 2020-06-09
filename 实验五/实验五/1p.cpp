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
	virtual double surface() = 0;           //���麯��
	virtual double volume() = 0;            //���麯��
};

//����������
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

//����Բ������
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
	Container *p;                       //���������ָ��p
	Sphere obj2(1);                     //�����������obj2
	Cylinder obj3(1, 1);                //����Բ�������obj3

	p = &obj2;                          //ָ��pָ���������obj2
	cout << "����������" << p->surface() << endl;
	cout << "���������" << p->volume() << endl;

	p = &obj3;                          //ָ��pָ��Բ�������obj3
	cout << "Բ����������" << p->surface() << endl;
	cout << "Բ���������" << p->volume() << endl;

	system("pause");
	return 0;
}
