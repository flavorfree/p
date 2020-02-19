#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{

	int* p = NULL;
	p = (int*)malloc(4*sizeof(int));//分配可以放得下4个整数的内存空间
	if (NULL != p)
	{
		//使用空间
	}
	free(p);//释放p所指向的动态内存
	//free（p）是只是将malloc申请的内存空间释放，在不改变free（）函数的原型前提下
	//是无法做到P=NULL的，P=NULL相当于空指针，不指向任何有效的对象；

	p = NULL;//此处将p置空，有必要
	//使用new或者malloc申请了指针p，使用后delete或者free，你必须将指针值设置为null，
	//否则，p将成为一个非法指针，后续代码如果使用到该指针有可能会造成系统崩溃或者破坏自身有效内存数据
	system("pause");
	return 0;
}