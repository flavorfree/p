#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

//�����н��л���Ϊ������������

int main()
{
	int n;
	cin >> n;

	vector<int> a;
	a.resize(n + 1);
	a[n] = 0;

	int i = 0;
	for (i = 0; i < n; i++)
		cin >> a[i];

	i = 0;
	int count = 0;
	while (i < n)
	{
		if (a[i] < a[i + 1])
		{
			while (i < n && a[i] <= a[i + 1])
				i++;
			count++;
			i++;
		}
		else if (a[i] == a[i + 1])
			i++;
		else
		{
			while (i < n && a[i] >= a[i + 1])
				i++;
			count++;
			i++;
		}
	}

	cout << count << endl;

	system("pause");
	return 0;
}