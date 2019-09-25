#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include<assert.h>//���ã���������������ش�������ֹ����ִ��

typedef int DataType;
class SeqList
{
public:
	SeqList(int capacity = 10)
	{
		_pData = (DataType*)malloc(capacity * sizeof(DataType));
		assert(_pData);

		_size = 0;
		_capacity = capacity;
	}
	~SeqList()//��������
	{
		if (_pData)
		{
			free(_pData);//�ͷŶ��ϵĿؼ�
			_pData = NULL;//��ָ����Ϊ��
			_capacity = 0;
			_size = 0;
		}
	}
private:
	int* _pData;
	size_t _size;
	size_t _capacity;
};

int main1()
{
	SeqList s1;
	return 0;
}