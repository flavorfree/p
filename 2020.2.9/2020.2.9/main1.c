#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//����һ���ṹ����൱�ڴ�����һ���Զ��Ƶ�����
//����typedef���涨��ʱ����ʡ��struct
typedef struct Student{
	char name[20]; //��Ա/����/�ֶ�
	int age;
}Student;//�ֺŲ��ܶ�
//�˴�Student��Ϊ�࣬Ϊstruct Student�ı���
int main1()
{//������һ������Ϊstruct Student�ı���s
	Student s = { "����", 100 };
	Student* p = &s;
	printf("%d\n", s.age);
	printf("%s\n", s.name);

	printf("%d\n", (*p).age);//100
	printf("%d\n", p->age);//100,(*p).age��p->age������﷽ʽ��һ����
	system("pause");
	return 0;
} 