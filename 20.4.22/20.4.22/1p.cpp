#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��
//switch��case�ȹؼ��ּ������ж���䣨A?B:C����

class Sum
{
public:
	Sum()//���캯��
	{
		sum += i;
		i++;
	}
	static void Init()
	{
		sum = 0;
		i = 1;
	}
	static int DateSum()
	{
		return sum;
	}

private:
	static int i;
	static int sum;
};

int Sum::i = 1;
int Sum::sum = 0;

class Solution
{
public:
	int Sum_Solutio(int n)
	{
		Sum::Init();
		//Sum a[n];//C++99д��
		Sum* a = new Sum[n];
		return Sum::DateSum();
	}
};

int main()
{
	Solution st;
	cout << st.Sum_Solutio(5) << endl;
	system("pause");
	return 0;
}