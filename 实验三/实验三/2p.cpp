#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	float team_grade;
	void PrintStuInfo();
	void ScanStuInfo();
private:
	string exam_number[20];
	string st_name[20];
};

void Student::ScanStuInfo()
{
	cout << "请输入姓名及准考证号" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i + 1 << "个学生" << endl;
		cout << "学生姓名:" << endl;
		getline(cin, st_name[i]);
		cout << "学生准考证号:" << endl;
		getline(cin, exam_number[i]);
	}
	cout << "请输入团队成绩：" << endl;
	cin >> team_grade;
	cout << "\n" << endl;
}

void Student::PrintStuInfo()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << st_name[i] << "\t" << "准考证号:" << exam_number[i]<<endl;
	}
	cout << "团队成绩:" << team_grade << "\n" << endl;
}

int main()
{
	Student st;
	st.ScanStuInfo();
	st.PrintStuInfo();

	system("pause");
	return 0;
}