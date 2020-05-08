#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
////#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v1;
//	vector<int> v2(4, 2);
//	vector<int> v3(v2);
//	vector<int> v4(v2.begin(), v2.end());
//	for (auto e:v2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	for (size_t i = 0; i < v3.size(); i++)
//		cout << v3[i] << " ";
//	cout << endl;
//	vector<int>::iterator t4 = v4.begin();
//	while (t4 != v4.end())
//	{
//		cout << *t4++ << " ";
//		//++t4;
//	}
//	cout << endl;
//
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	v1.push_back(5);
//	vector<int>::iterator t1 = v1.begin();
//	while (t1 != v1.end())
//	{
//		cout << *t1++ << " ";
//	}
//	cout << endl;
//	vector<int>::reverse_iterator t2 = v1.rbegin();
//	while (t2 != v1.rend())
//	{
//		cout << *t2++ << " ";
//	}
//	cout << endl;
//	
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//
//	vector<int> v5;
//	size_t sz = v5.capacity();
//	v5.reserve(100);
//	for (int i = 0; i < 100; ++i)
//	{
//		v5.push_back(i);
//		if (sz != v5.capacity())
//		{
//			sz = v5.capacity();
//			cout << sz << '\n';
//		}
//	}
//
//	vector<int> v6(10, 6);
//	v6.resize(8,100);
//	v6.pop_back();
//	v6.pop_back();
//	v6.insert(v6.begin(), 0);
//	vector<int>::iterator pos = find(v6.begin(), v6.end(), 6);
//	v6.insert(pos, 9);
//
//	pos = find(v6.begin(), v6.end(), 0);
//	v6.erase(pos);
//	for (size_t i = 0; i < v6.size(); i++)
//		cout << v6[i] << " ";
//	cout << endl;

	
	//string s1;
	//string s2("hello");
	//string s3(5, 'a');
	//string s4(s2);
	//string s5(s2, 2);
	//cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << endl;
	//
	//cout << s2[1] << " " << s3[1] << endl;
	//s2.push_back('d');
	//s2.append(" world");
	//s2 += '!';
	//s2 += "woc";
	//cout << s2 << endl;
	//cout << s2.c_str() << endl;
	//size_t pos = s2.find('!');
	//cout << pos << endl;
	//string s6(s2.substr(pos, s2.size() - pos));
	//cout << s6 << endl;

	//cout << s2.size() << endl;	//5
	//cout << s2.length() << endl;
	//cout << s2.capacity() << endl;	//15

	//s2.clear();
	//cout << s2.size() << endl;	//0
	//cout << s2.length() << endl;
	//cout << s2.capacity() << endl;	//15

	//s2.resize(10, 'o');
	//cout << s2 << endl;
	//cout << s2.size() << endl;	
	//cout << s2.capacity() << endl;

	//s2.resize(15);
	//cout << s2 << endl;
	//cout << s2.size() << endl;
	//cout << s2.capacity() << endl;

	//s2.resize(3);
	//cout << s2 << endl;
	//cout << s2.size() << endl;
	//cout << s2.capacity() << endl;
//
//	system("pause");
//	return 0;
//}