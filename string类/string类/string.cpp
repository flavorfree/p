#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
////实现一个简单的string
//
////传统写法
//
////深浅拷贝问题
//namespace zd
//{
//	class string
//	{
//	public:
//		/*string()
//			:_str(new char[1])
//		{
//			*_str = '\0';
//		}*/
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
//			:_str(new char[strlen(s._str) + 1])
//		{
//			strcpy(_str, s._str);
//		}
//
//		string& operator=(const string& s)	//赋值重载
//		{
//			if (this != &s)
//			{
//				delete[] _str;
//				_str = new char[strlen(s._str) + 1];
//				strcpy(_str, s._str);
//			}
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