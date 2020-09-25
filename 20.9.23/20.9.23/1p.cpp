#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	while (getline(cin, s1))
	{
		int end = 0;
		if ((s1[0] >= '0' && s1[0] <= '9') || (s1[0] >= 'a' && s1[0] <= 'z') || s1[0] == '-' || s1[0] == '+')
		{
			int num = 1;
			int i = s1.size() - 1;
			while (i >= 0)
			{ 
				if (s1[i] >= '0' && s1[i] <= '9')
					end += num  * (s1[i] - '0');
				else if (s1[i] >= 'a' && s1[i] <= 'z')
					end += num * (s1[i] - 'a' + 10);
				else
					break;
				num *= 36;
				i--;
			}
			if (s1[0] == '-')
				cout << -end << endl;
			else
				cout << end << endl;
		}
		else
		{
			cout << 0 << endl;
			break;
		}
	}
	system("pause");
	return 0;
}