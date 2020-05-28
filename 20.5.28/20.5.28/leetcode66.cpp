#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

//����һ����������ɵķǿ���������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
//
//���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
//
//����Լ���������� 0 ֮�⣬��������������㿪ͷ��


class Solution 
{
public:
	vector<int> plusOne(vector<int>& digits) {

		for (int i = digits.size() - 1; i >= 0; i--)
		{
			if (digits[i] != 9)
			{
				digits[i] += 1;
				break;
			}
			if (digits[i] == 9)
			{
				digits[i] = 0;
				if (i == 0)
				{
					digits.push_back(0);
					for (int j = digits.size() - 1; j >= 1; j--)
					{
						digits[j] = digits[j - 1];
					}
					digits[i] += 1;
				}
			}
		}
		return digits;
	}
};

int main()
{
	Solution su;
	vector<int> v;
	v.push_back(9);
	//v.push_back(3);

	vector<int> v2 = su.plusOne(v);

	auto it = v.begin();
	while (it != v.end())
	{
		cout << *it++ << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}