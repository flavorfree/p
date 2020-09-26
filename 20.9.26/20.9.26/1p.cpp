#include<iostream>
#include<string>
#include<vector>
using namespace std;

void change(vector<string>& s1, string& s, int n, vector<string>& s2)
{
	vector<string> s3(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			s3[i].push_back(s1[n-1-j][i]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s3[i][j] == '0')
				s += s2[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			s1[i][j] = s3[i][j];
		}
	}
}

string rotatePassword(vector<string>& s1, vector<string>& s2) {
	// write code here
	string s;
	int n = s1[0].size();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s1[i][j] == '0')
				s += s2[i][j];
		}
	}

	for (int num = 0; num < 3; num++)
	{
		change(s1, s, n, s2);
	}
	return s;
}

int main()
{
	vector<string> s1;
	vector<string> s2;
	s1 = { "1101", "1010", "1111", "1110"};
	s2 = { "ABCD", "EFGH", "IJKL", "MNPQ" };

	string end;
	end = rotatePassword(s1, s2);
	cout << end << endl;
	system("pause");
	return 0;
}

