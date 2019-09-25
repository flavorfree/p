#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include<assert.h>//作用：如果他的条件返回错误，则终止程序执行

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
	~SeqList()//析构函数
	{
		if (_pData)
		{
			free(_pData);//释放堆上的控件
			_pData = NULL;//将指针置为空
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