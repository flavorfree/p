#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

class Building
{
public:
	void Buildings(string ad, int hnum)
	{
		address = ad;
		house_num = hnum;
	}
	void print()
	{
		cout << "地址：" << address << endl;
		cout << "楼号：" << house_num << endl;
	}

private:
	string address;
	int house_num;
};

class Houose :public Building
{
public:
	void Houses(int rnum, int ar)
	{
		room_num = rnum;
		area = ar;
	}
	void print()
	{
		cout << "房号：" << room_num << endl;
		cout << "面积：" << area << "平方米" << endl;
	}
private:
	int room_num;
	int area;
};

class Office :public Building
{
public:
	void Offices(string ofname, string tel)
	{
		office_name = ofname;
		tel_num = tel;
	}
	void print()
	{
		cout << "办公室名称：" << office_name << endl;
		cout << "电话号码：" << tel_num << endl;
	}
private:
	string office_name;
	string tel_num;
};

int main()
{
	Building building;
	Houose house;
	Office office;

	building.Buildings("北大街", 2);
	building.print();

	house.Houses(201, 98);
	house.print();

	office.Offices("办公处", "111111");
	office.print();

	system("pause");
	return 0;
}