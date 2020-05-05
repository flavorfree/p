#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

// ×Ö·û´®Ïà¼Ó

int main()
{
	string s1;
	string s2;
	cin >> s1 >> s2;
	int end1 = s1.size() - 1;
	int end2 = s2.size() - 1;
	int next = 0;
	int add, val1, val2;
	string adds;
	while (end1 >= 0 || end2 >= 0)
	{
		if (end1 >= 0)
			val1 = s1[end1--] - '0';
		else
			val1 = 0;

		if (end2 >= 0)
			val2 = s2[end2--] - '0';
		else
			val2 = 0;

		add = val1 + val2 + next;
		if (add > 9)
		{
			add %= 10;
			next = 1;
		}
		else
			next = 0;

		adds += add + '0';
	}
	if (next == 1)
		adds += '1';
	reverse(adds.begin(), adds.end());

	cout << adds << endl;

	system("pause");
	return 0;
}