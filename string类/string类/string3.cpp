#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<assert.h>
using namespace std;

//实现一个简单的string

//传统写法

//string模拟实现   增删查改
namespace zd
{
	class string
	{
	public:
		typedef const char* const_iterator;	//const迭代器
		typedef char* iterator;	//迭代器
		
		const_iterator begin() const
		{
			return _str;
		}

		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}

		/*string()
			:_str(new char[1])
		{
			*_str = '\0';
		}*/
		string(const char* str = "")	//构造函数
			:_str(new char[strlen(str) + 1])
		{
			strcpy(_str, str);
			_size = strlen(str);
			_capacity = _size;
		}

		~string()	//析构函数
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}

		string(const string& s)		//拷贝构造，深拷贝
			:_str(new char[s._size + 1])
			, _size(s._size)
			, _capacity(s._size)
		{
			strcpy(_str, s._str);
		}

		string& operator=(const string& s)	//赋值重载
		{
			if (this != &s)
			{
				delete[] _str;
				_str = new char[s._size + 1];
				strcpy(_str, s._str);
				_size = s._size;
				_capacity = s._capacity;
			}
			return *this;
		}

		const char* c_str()
		{
			return _str;
		}

		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}
		const char& operator[](size_t pos) const
		{
			assert(pos < _size);
			return _str[pos];
		}

		size_t size()
		{
			return _size;
		}

		size_t capacity()
		{
			return _capacity;
		}
		
		void reserve(size_t n)	//扩容
		{
			if (n > _capacity)
			{
				char* tmp = new char[n+1];
				strcpy(tmp, _str);
				delete[] _str;
				_str = tmp;
				_capacity = n;
			}
		}

		void push_back(char ch)
		{
			if (_size == _capacity)
			{
				//开新的空间，拷贝数据，进行扩容
				reserve(_capacity * 2);
			}

			_str[_size] = ch;
			++_size;
			_str[_size] = '\0';
		}

		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size+len > _capacity)
			{
				//扩容
				reserve(_size + len);
			}

			strcpy(_str + _size,str);
			_size += len;
		}

		const string& operator += (char ch)
		{
			push_back(ch);
			return *this;
		}

		const string& operator += (char* ch)
		{
			append(ch);
			return *this;
		}

		const string& operator += (const string& s)
		{
			append(s._str);
			return *this;
		}

		string operator+(char* ch)
		{
			string tmp(*this);
			tmp.append(ch);
			return tmp;
		}

		void insert(size_t pos, char ch)
		{
			assert(pos <= _size);
			if (_size == _capacity)
			{
				reserve(_capacity * 2);
			}
			/*int end = _size;
			while (end >= (int)pos)
			{
				_str[end+1] = _str[end];
				--end;
			}*/
			size_t end = _size+1;
			while (end > pos)
			{
				_str[end] = _str[end-1];
				--end;
			}
			_str[pos] = ch;
			++_size;
		}

		void insert(size_t pos, const char* str)
		{
			assert(pos <= _size);

			size_t len = strlen(str);
			if (_size + len >_capacity)
			{
				reserve(_size + len);
			}

			int end = _size;
			while (end >= (int)pos)
			{
				_str[end + len] = _str[end];
				--end;
			}

			while (*str)
			{
				_str[pos++] = *str++;
			}

			_size += len;
		}

		/*operator>
		operator<
		operator==
		operator>=*/

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}

int main()
{
	//zd::string s1("hello");
	///*s1[0] = 'X';*/
	//cout << s1.c_str() << endl;

	////zd::string s2;
	////cout << s2.c_str() << endl;

	//zd::string copy(s1);
	//cout << copy.c_str() << endl;

	//copy[0] = 'h';
	//cout << s1.c_str() << endl;
	//cout << copy.c_str() << endl;

	//zd::string s4 = "world";
	//s1 = s4;
	//cout << s4.c_str() << endl;
	//cout << s1.c_str() << endl;

	//zd::string::iterator it1 = s1.begin();
	//while (it1 != s1.end())
	//{
	//	cout << *it1 << " ";
	//	*it1++;
	//}
	//cout << endl;
	//for (auto e : s1)	//范围for基于迭代器
	//{
	//	cout << e << " ";
	//}

	zd::string s5("hello");
	s5 += "world";
	s5 += '!';
	cout << s5.c_str() << endl;

	s5.insert(5, ' ');
	cout << s5.c_str() << endl;
	s5.insert(0, '@');
	cout << s5.c_str() << endl;

	s5.insert(0, "zd");
	cout << s5.c_str() << endl;

	system("pause");
	return 0;
}