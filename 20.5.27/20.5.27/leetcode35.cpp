#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<vector>
//using namespace std;
//
////给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
////
////你可以假设数组中无重复元素
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