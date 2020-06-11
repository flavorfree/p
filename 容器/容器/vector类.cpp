#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//namespace zd
//{
//	template<class T>
//	class vector
//	{
//	public:
//		typedef T* iterator;	//vector迭代器是一个原生指针
//
//		vector()
//			:_start(nullptr)
//			, _finish(nullptr)
//			, _end_of_storage(nullptr)
//		{}
//
//		vector(const vector<T>& v)
//		{
//			_start = new T[v.size()];
//			memcpy(_start, v._start, sizeof(T)*v.size());
//			_finish = _start + v.size();
//			_end_of_storage = _start + v.size();
//		}
//
//		vector<T>& operator=(const vector<T> v)
//		{
//			swap(v);
//			return *this;
//		}
//
//		~vector()
//		{
//			delete[] _start;
//			_start = _finish = _end_of_storage = nullptr;
//		}
//
//		void swap(vector<T>& v)
//		{
//			swap(_start, v._start);
//			swap(_finish, v._finish);
//			swap(_end_of_storage, v._end_of_storage);
//		}
//
//		iterator begin()
//		{
//			return _start;
//		}
//
//		iterator end()
//		{
//			return _finish;
//		}
//
//		void resize(size_t n, const T& val = T())
//		{
//			if (n < size())
//			{
//				_finish = _start + n;
//			}
//			if (n > capacity())
//			{
//				reserve(n);	//扩容，扩容后情况变为：size() > n > capacity()
//			}
//			while (_finish != _start + n)	//size() > n > capacity()
//			{
//				_finish = val;
//				++_finish;
//			}
//		}
//
//		void reserve(size_t n)
//		{
//			if (n > capacity())
//			{
//				size_t sz = size();
//				T* tmp = new T[n];
//				if (_start)
//				{
//					memcpy(tmp, _start, sizeof(T)*sz);
//					delete[] _start;
//				}
//
//				_start = tmp;
//				_finish = _start + sz;
//				_end_of_storage = _start + n;
//			}
//		}
//
//		void push_back(const T& x)
//		{
//			if (_finish == _end_of_storage)
//			{
//				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
//				reserve(newcapacity);
//			}
//			*_finish = x;
//			++_finish;
//		}
//
//		void pop_back()
//		{
//			assert(_finish > _start);
//			--_finish;
//		}
//
//		void insert(iterator pos, const T& x)	//插入
//		{
//			assert(pos < _finish && pos >= _start);
//			if (_finish = _end_of_storage)
//			{
//				size_t n = pos - _start;
//				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
//				reserve(newcapacity);
//				pos = _start + n;	//增容后，_start位置可能改变了，所以要找到正确的pos位置
//			}
//
//			iterator end = _finish - 1;
//			while (end >= pos)
//			{
//				*(end + 1) = *end;
//				end--;
//			}
//
//			*pos = x;
//			++_finish;
//		}
//
//		void erase(iterator pos)
//		{
//			assert(pos < _finish && pos >= _start);
//			iterator start = pos;
//			while (start != _finish)
//			{
//				*start = *(start + 1);
//				start++;
//			}
//			--_finish;
//		}
//
//		size_t size() const
//		{
//			return _finish - _start;
//		}
//
//		size_t capacity() const
//		{
//			return _end_of_storage - _start;
//		}
//
//		T& operator[](size_t pos)
//		{
//			return _start[pos];
//		}
//
//		const T& operator[](size_t pos) const
//		{
//			return _start[pos];
//		}
//
//	private:
//		iterator _start;			//指向数据块的开始
//		iterator _finish;			//指向有效数据的尾
//		iterator _end_of_storage;	//指向存储容量的尾
//	};
//
//	void test1()
//	{
//		vector<int> v;
//		v.push_back(1);
//		v.push_back(2);
//		v.push_back(3);
//		v.push_back(4);
//
//		v.pop_back();
//
//		v.insert(v.begin(), 0);
//
//		v.erase(v.begin());
//
//		for (size_t i = 0; i < v.size(); i++)
//			cout << v[i] << " ";
//		cout << endl;
//	}
//}
//
//int main()
//{
//	zd::test1();
//	system("pause");
//	return 0;
//}