#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
	list<int> l1;
	list<int> l2(4, 0);
	list<int> l3(l2);
	list<int> l4(l2.begin(), l2.end());

	int a[] = { 1, 2, 3, 4 };
	list<int> l5(a, a + sizeof(a) / sizeof(int));

	list<int>::iterator it = l2.begin();
	while (it != l2.end())
		cout << *it++ << " ";
	cout << endl;

	for (list<int>::reverse_iterator i = l5.rbegin(); i != l5.rend(); i++)
		cout << *i << " ";
	cout << endl;

	l5.push_back(5);
	l5.push_front(0);

	for (auto i : l5)
		cout << i << " ";
	cout << endl;

	l5.pop_back();
	l5.pop_front();

	for (auto i : l5)
		cout << i << " ";
	cout << endl;

	auto pos = ++l5.begin();
	cout << *pos << endl;

	l5.insert(pos, 4);

	vector<int> v{ 7, 8, 9 };
	l5.insert(pos, v.begin(), v.end());

	for (auto i : l5)
		cout << i << " ";
	cout << endl;

	l5.erase(pos);
	//l5.erase(l5.begin(), l5.end());//删除所有数据

	l5.swap(l2);
	for (auto i : l5)
		cout << i << " ";
	cout << endl;
	
	for (auto i : l2)
		cout << i << " ";
	cout << endl;

	auto e = l2.begin();
	while (e != l2.end())
	{
		l2.erase(e++);
	}

	for (auto i : l2)
		cout << i << " ";
	cout << endl;

	l2.clear();
	cout << l2.size() << endl;



	system("pause");
	return 0;
}