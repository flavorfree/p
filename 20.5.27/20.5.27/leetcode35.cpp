#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<vector>
//using namespace std;
//
////����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
////
////����Լ������������ظ�Ԫ��
//
//class Solution 
//{
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		int i = 0;
//
//		while (i < nums.size())
//		{
//			if (nums[i] >= target)
//				return i;
//			else
//				i++;
//		}
//
//		return i;
//	}
//};
//
//int main()
//{
//	Solution su;
//
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(5);
//	v.push_back(6);
//
//	while (1)
//	{
//		int n;
//		cin >> n;
//		cout << su.searchInsert(v, n) <<endl;
//	}
//
//	system("pause");
//	return 0;
//}