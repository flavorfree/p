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
	cout << "������������׼��֤��" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "��" << i + 1 << "��ѧ��" << endl;
		cout << "ѧ������:" << endl;
		getline(cin, st_name[i]);
		cout << "ѧ��׼��֤��:" << endl;
		getline(cin, exam_number[i]);
	}
	cout << "�������Ŷӳɼ���" << endl;
	cin >> team_grade;
	cout << "\n" << endl;
}

void Student::PrintStuInfo()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << st_name[i] << "\t" << "׼��֤��:" << exam_number[i]<<endl;
	}
	cout << "�Ŷӳɼ�:" << team_grade << "\n" << endl;
}

int main()
{
	Student st;
	st.ScanStuInfo();
	st.PrintStuInfo();

	system("pause");
	return 0;
}