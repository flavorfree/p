#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{

	int* p = NULL;
	p = (int*)malloc(4*sizeof(int));//������Էŵ���4���������ڴ�ռ�
	if (NULL != p)
	{
		//ʹ�ÿռ�
	}
	free(p);//�ͷ�p��ָ��Ķ�̬�ڴ�
	//free��p����ֻ�ǽ�malloc������ڴ�ռ��ͷţ��ڲ��ı�free����������ԭ��ǰ����
	//���޷�����P=NULL�ģ�P=NULL�൱�ڿ�ָ�룬��ָ���κ���Ч�Ķ���

	p = NULL;//�˴���p�ÿգ��б�Ҫ
	//ʹ��new����malloc������ָ��p��ʹ�ú�delete����free������뽫ָ��ֵ����Ϊnull��
	//����p����Ϊһ���Ƿ�ָ�룬�����������ʹ�õ���ָ���п��ܻ����ϵͳ���������ƻ�������Ч�ڴ�����
	system("pause");
	return 0;
}