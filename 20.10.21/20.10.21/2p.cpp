#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int flag = 1;
		int key = 0;
		int sum = 0;
		if (s[0] == '-')
			flag = -1;

		for (int i = 0; i<s.size(); i++)
		{
			if (s[i] == '+' || s[i] == ' '|| s[i]=='-')
				continue;
			if (s[i] >= '0' && s[i] <= '9')
			{
				sum = sum * 10 + s[i] - '0';
			}
			else{
				key = 1;
				break;
			}
		}
		if (key == 1)
			cout << 0 << endl;
		else
		{
			sum *= flag;
			cout << sum << endl;
		}
	}
	return 0;
}