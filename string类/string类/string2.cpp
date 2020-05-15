#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
////实现一个简单的string
//
////现代写法
//namespace zd
//{
//	class string
//	{
//	public:
//		string(const char* str = "")	//构造函数
//			:_str(new char[strlen(str) + 1])
//		{
//			strcpy(_str, str);
//		}
//
//		~string()	//析构函数
//		{
//			delete[] _str;
//			_str = nullptr;
//		}
//
//		string(const string& s)		//拷贝构造，深拷贝
//			:_str(nullptr)
//		{
//			string tmp(s._str);//调用构造函数
//			swap(_str, tmp._str);
//		}
//
//		string& operator=(string s)	//赋值重载
//		{
//			/*if (this != &s)
//			{
//				string tmp(s);
//				swap(_str, tmp._str);
//			}*/
//			swap(_str,s._str);	//更简洁的方式（牛逼！）
//			return *this;
//		}
//
//		const char* c_str()
//		{
//			return _str;
//		}
//
//		char& operator[](size_t pos)
//		{
//			return _str[pos];
//		}
//
//
//	private:
//		char* _str;
//	};
//}
//
//int main()
//{
//	zd::string s1("hahaha");
//	cout << s1.c_str() << endl;
//
//	zd::string s2="world";
//	cout << s2.c_str() << endl;
//
//	s1 = s2;
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;


//	zd::string s1("hello");
//	s1[0] = 'X';
//	cout << s1.c_str() << endl;
//
//	zd::string s2;
//	cout << s2.c_str() << endl;
//
//	zd::string copy(s1);
//	cout << copy.c_str() << endl;
//
//	copy[0] = 'h';
//	cout << s1.c_str() << endl;
//	cout << copy.c_str() << endl;
//
//	zd::string s4 = "world";
//	s1 = s4;
//	cout << s4.c_str() << endl;
//	cout << s1.c_str() << endl;
//
//	system("pause");
//	return 0;
//}