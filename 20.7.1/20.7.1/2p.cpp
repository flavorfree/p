#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include<string>


using namespace std;

int x = 0;

typedef struct person                               //定义结构体
{
	char num[10];   //编号
	char name[15]; //姓名
	int age;      //年龄
	string illness;      //病情
	char word[50];      //医嘱
}person;
person per[100];  //定义100个


void Statistics()
{
	float j = 0;
	string c;
	cout << "请输入要统计的疾病种类" << endl;
	cin >> c;
	for (int i = 0; i <= x; i++)
	{
		if (per[i].illness == c)
		{
			j++;
		}

	}
	float h;
	h = (j / x);
	cout << "有" << h * 100 << "%" << "的人患" << c << endl;
	cout << j << endl << x << endl;
}

//录入信息
void write()
{
	int a;
	cout << "请输入要录入信息的人数" << endl;
	cin >> a;
	int b = x + a;
	for (x; x < b; x++)
	{
		cout << "请输入编号" << endl;
		cin >> per[x].num;
		cout << "请输入姓名" << endl;
		cin >> per[x].name;
		cout << "请输入年龄" << endl;
		cin >> per[x].age;
		cout << "请输入病情" << endl;
		cin >> per[x].illness;
	}
}

//信息查询
void search()
{
	int i;
	cout << "请输入要查询的编号" << endl;
	cin >> i;
	cout << "编号：" << per[i - 1].num << endl;
	cout << "姓名：" << per[i - 1].name << endl;
	cout << "年龄：" << per[i - 1].age << endl;
	cout << "病情：" << per[i - 1].illness << endl;
}

//查看医嘱
void read()
{
	int i;
	cout << "请输入要查看的编号" << endl;
	cin >> i;
	if (per[i - 1].word == NULL)
		cout << "暂无医嘱";
	else
		cout << "医生嘱咐：" << per[i - 1].word << endl;
}

//修改医嘱
void change()
{
	int i;
	cout << "请输入要修改的编号" << endl;
	cin >> i;
	cout << "请输入医嘱" << endl;
	cin >> per[i - 1].word;
}

int main()
{
	int n, m, l;
	while (1)
	{
		cout << "---------------------------------" << endl;
		cout << "请选择客户端:" << endl << "     输入0-进入患者端" << endl << "     输入9-进入医生端" << endl;
		cout << "---------------------------------" << endl;
		cin >> n;
		switch (n)
		{
		case 0:
		{
				  cout << "请选择功能" << endl << "1.录入信息" << endl << "2.信息查询" << endl << "3.查看医嘱" << endl << "4.退出" << endl;
				  cin >> m;
				  switch (m)
				  {
				  case 1:write(); break;
				  case 2:search(); break;
				  case 3:read(); break;
				  case 4:break;
				  }
		}
		case 9:
		{
				  cout << "请选择功能" << endl << "5.信息查询" << endl << "6.查看医嘱" << endl << "7.修改医嘱" << endl << "8.统计" << endl << "9.退出" << endl;
				  cin >> l;
				  switch (l)
				  {
				  case 5:search(); break;
				  case 6:read(); break;
				  case 7:change(); break;
				  case 8:Statistics(); break;
				  case 9:break;
				  }
		}
		}
	}
}
