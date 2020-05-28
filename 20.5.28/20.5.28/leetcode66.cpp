#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

//给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
//
//最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//
//你可以假设除了整数 0 之外，这个整数不会以零开头。


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