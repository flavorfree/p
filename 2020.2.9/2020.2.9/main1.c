#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//定义一个结构体就相当于创建了一个自定制的类型
//带上typedef下面定义时可以省略struct
typedef struct Student{
	char name[20]; //成员/属性/字段
	int age;
}Student;//分号不能丢
//此处Student称为类，为struct Student的别名
int main1()
{//创建了一个类型为struct Student的变量s
	Student s = { "张三", 100 };
	Student* p = &s;
	printf("%d\n", s.age);
	printf("%s\n", s.name);

	printf("%d\n", (*p).age);//100
	printf("%d\n", p->age);//100,(*p).age和p->age两个表达方式是一样的
	system("pause");
	return 0;
} 