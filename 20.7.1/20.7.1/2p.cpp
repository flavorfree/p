#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include<string>


using namespace std;

int x = 0;

typedef struct person                               //����ṹ��
{
	char num[10];   //���
	char name[15]; //����
	int age;      //����
	string illness;      //����
	char word[50];      //ҽ��
}person;
person per[100];  //����100��


void Statistics()
{
	float j = 0;
	string c;
	cout << "������Ҫͳ�Ƶļ�������" << endl;
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
	cout << "��" << h * 100 << "%" << "���˻�" << c << endl;
	cout << j << endl << x << endl;
}

//¼����Ϣ
void write()
{
	int a;
	cout << "������Ҫ¼����Ϣ������" << endl;
	cin >> a;
	int b = x + a;
	for (x; x < b; x++)
	{
		cout << "��������" << endl;
		cin >> per[x].num;
		cout << "����������" << endl;
		cin >> per[x].name;
		cout << "����������" << endl;
		cin >> per[x].age;
		cout << "�����벡��" << endl;
		cin >> per[x].illness;
	}
}

//��Ϣ��ѯ
void search()
{
	int i;
	cout << "������Ҫ��ѯ�ı��" << endl;
	cin >> i;
	cout << "��ţ�" << per[i - 1].num << endl;
	cout << "������" << per[i - 1].name << endl;
	cout << "���䣺" << per[i - 1].age << endl;
	cout << "���飺" << per[i - 1].illness << endl;
}

//�鿴ҽ��
void read()
{
	int i;
	cout << "������Ҫ�鿴�ı��" << endl;
	cin >> i;
	if (per[i - 1].word == NULL)
		cout << "����ҽ��";
	else
		cout << "ҽ��������" << per[i - 1].word << endl;
}

//�޸�ҽ��
void change()
{
	int i;
	cout << "������Ҫ�޸ĵı��" << endl;
	cin >> i;
	cout << "������ҽ��" << endl;
	cin >> per[i - 1].word;
}

int main()
{
	int n, m, l;
	while (1)
	{
		cout << "---------------------------------" << endl;
		cout << "��ѡ��ͻ���:" << endl << "     ����0-���뻼�߶�" << endl << "     ����9-����ҽ����" << endl;
		cout << "---------------------------------" << endl;
		cin >> n;
		switch (n)
		{
		case 0:
		{
				  cout << "��ѡ����" << endl << "1.¼����Ϣ" << endl << "2.��Ϣ��ѯ" << endl << "3.�鿴ҽ��" << endl << "4.�˳�" << endl;
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
				  cout << "��ѡ����" << endl << "5.��Ϣ��ѯ" << endl << "6.�鿴ҽ��" << endl << "7.�޸�ҽ��" << endl << "8.ͳ��" << endl << "9.�˳�" << endl;
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
