//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int getFirstUnFormedNum(vector<int> arr, int len) {
//	sort(arr.begin(), arr.end());
//	int min = arr[0];
//	int i = 0;
//	int max = 0;
//	while (i < len)
//	{
//		max += arr[i];
//		i++;
//	}
//	for (i = min; i < max+1; i++)
//	{
//		int flag;
//		for (int j = 0; j< len; j++)
//		{
//			if (arr[j] == i)
//			{
//				flag = 0;
//				break;
//			}
//			else
//				flag = 1;
//		}
//		if (flag == 1)
//		{
//			for (int a = 0; a < len; a++)
//			{
//				for (int j = a+1; j< len; j++)
//				{
//					if (arr[a] + arr[j] == i)
//					{
//						flag = 0;
//						break;
//					}
//					else if (arr[a] + arr[j] > i)
//						return i;
//				}
//				if (flag == 0)
//					break;
//			}
//		}
//	}
//	return i;
//}
//
//int main()
//{
//	vector<int> v;
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(3);
//	int len = v.size();
//	int a = getFirstUnFormedNum(v, len);
//	cout << a << endl;
//	system("pause");
//	return 0;
//}
