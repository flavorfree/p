#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

int main()
{

		string s1;
		getline(cin, s1);
		string s2;
		getline(cin, s2);

		int flag = 0;
		for (int i = 0; i < s1.size(); i++)
		{
			int j = 0;
			while (s2[j] == s1[i])
			{
				if (j == s2.size() - 1)
				{
					flag++;
					break;
				}
				j++, i++;
			}
		}
		cout << flag << endl;

	system("pause");
	return 0;
}