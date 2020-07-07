#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<set>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		set<int> s;
		int i = 2;
		while (i <= num)
		{
			while (num % i == 0)
			{
				num = num / i;
				s.insert(i);
			}
			i++;
		}
		cout << s.size() << endl;
	}
	system("pause");
	return 0;
}