#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str, r, cur;
	cin >> str;
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			cur += str[i]; // ����+=��cur
		}
		else// �ҳ��������ַ�����������ַ��� 
		{
			if (r.size() < cur.size())
			{
				r = cur;
			}
			else
				cur.clear();
		}
	}

	cout << r << endl;
	
	system("pause");
	return 0;
}