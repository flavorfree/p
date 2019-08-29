#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//结构体是怎么看起的：向它的最长元素看齐

struct Student 
{
	void SetStudentInfo(const char* name, const char* gender, int age) 
	{
		strcpy(_name, name);   
		strcpy(_gender, gender);  
		_age = age; 
	}       
	void PrintStudentInfo() 
	{
		cout << _name << " " << _gender << " " << _age << endl;
	}
	char _name[20];    
	char _gender[3];  
	int _age;

};

int main6()
{
	Student s;   
	s.SetStudentInfo("Peter", "男", 18);  

	system("pause");
	return 0;
}


