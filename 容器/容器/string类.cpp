#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
//namespace zd
//{
//	class string
//	{
//	public:
//		string(const char* str = " ")	//构造
//			:_str(new char[strlen(str)+1])
//		{
//			strcpy(_str, str);
//		}
//
//		~string()	//析构
//		{
//			delete[] _str;
//			_str = nullptr;
//		}
//
//		//string(const string& s)	//拷贝构造
//		//	:_str(new char[strlen(s._str)+1])
//		//{
//		//	strcpy(_str, s._str);
//		//}
//
//		string(const string& s)	//拷贝构造，深拷贝
//			:_str(nullptr)
//		{
//			string tmp(s._str);	//调用构造函数
//			swap(_str, tmp._str);
//		}
//
//		//string& operator = (const string& s)	//赋值重载
//		//{
//		//	if (this != &s)
//		//	{
//		//		delete[] _str;
//		//		_str = new char[strlen(s._str) + 1];
//		//		strcpy(_str, s._str);
//		//	}
//		//	return *this;
//		//}
//
//		string& operator = (string s)
//		{
//			swap(_str, s._str);
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
//	private:
//		char* _str;
//	};
//}
//
//int main()
//{
//	zd::string s1("hello");
//	cout << s1.c_str() << endl;
//
//	s1[0] = 'X';
//	cout << s1.c_str() << endl;
//
//	zd::string s2(s1);
//	cout << s2.c_str() << endl;
//
//	zd::string s3;
//	s3 = s1;
//	cout << s3.c_str() << endl;
//
//	system("pause");
//	return 0;
//}