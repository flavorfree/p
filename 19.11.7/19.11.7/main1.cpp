#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
#include <string> 
#include <algorithm> 
using namespace std;

int main() 
{
	string s;      
	getline(cin, s);      // 注意这里要使用getline，cin>>s遇到空格就接收结束了 
	reverse(s.begin(), s.end());   // 翻转整个句子 
	auto start = s.begin();        // 翻转单词
	while (start != s.end())   
	{        
		auto end = start;      
		while (end != s.end() && *end != ' ')     
			end++;

	reverse(start, end);

	if (end != s.end())      
		start = end + 1;    
	else        
		start = end;
}

	cout << s << endl;

	return 0;
}