#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstring>
#define NAME_LENGTH 10
#define N 3
#define M 3
using namespace std;

typedef struct StudentScore
{
	char name[NAME_LENGTH];
	int * scoreArry;
	int total;
}SS;

//计算每个学生的总分
void totalScores(SS *stuArry)
{
	for (int i = 0; i < M; i++)
	{
		stuArry[i].total = 0;
		for (int j = 0; j < N; j++)
		{
			stuArry[i].total += stuArry[i].scoreArry[j];
		}
	}
}
//显示学生信息
void outPutStu(SS &stu)
{
	cout << "学生姓名：" << stu.name << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "第" << i + 1 << "门课的成绩：" << stu.scoreArry[i] << endl;
	}
	cout << "总分：" << stu.total << endl << endl;
}

void swap(SS &stu1, SS &stu2)
{
	SS tmp;
	//交换姓名
	strcpy_s(tmp.name, NAME_LENGTH, stu1.name);
	strcpy_s(stu1.name, NAME_LENGTH, stu2.name);
	strcpy_s(stu2.name, NAME_LENGTH, tmp.name);
	//交换分数列表
	tmp.scoreArry = stu1.scoreArry;
	stu1.scoreArry = stu2.scoreArry;
	stu2.scoreArry = tmp.scoreArry;
	//交换总分
	tmp.total = stu1.total;
	stu1.total = stu2.total;
	stu2.total = tmp.total;
}

//查找学生
void StuSerch(SS * stuArry)
{
	char serch_name[NAME_LENGTH];
	int serch_total;
	int serch_index, serch_score;
	cout << "请输入查找条件（0按姓名，1按总成绩，2按单科成绩，3退出查找）：";
	int count = 0, way;
	while (true)
	{
		cin >> way;
		if (way != 0 && way != 1 && way != 2 && way != 3)
		{
			cout << "请输入正确的查找条件！";
			continue;
		}
		else
			break;
	}

	//查找
	switch (way)
	{
	case 0:
		cout << "请输入学生姓名：";
		cin >> serch_name;
		for (int i = 0; i < M; i++)
		{
			if (strcmp(serch_name, stuArry[i].name) == 0)
			{
				if (count == 0)
				{
					cout << "查找到的学生信息为：\n\n";
				}
				outPutStu(stuArry[i]);
				count++;
			}
		}
		break;
	case 1:
		cout << "请输入学生总分：";
		cin >> serch_total;
		for (int i = 0; i < M; i++)
		{
			if (serch_total == stuArry[i].total)
			{
				if (count == 0)
				{
					cout << "查找到的学生信息为：\n\n";
				}
				outPutStu(stuArry[i]);
				count++;
			}
		}
		break;
	case 2:
		while (true)
		{
			cout << "请输入要查找的课程：";

			cin >> serch_index;
			if (serch_index > 0 && serch_index <= N)
			{
				break;
			}
			else
			{
				cout << "课程编号不在范围内，最大为" << N << endl << endl;
			}
		}
		cout << "请输入该门课程分数：";
		cin >> serch_score;
		for (int i = 0; i < M; i++)
		{
			if (serch_score == stuArry[i].scoreArry[serch_index - 1])
			{
				if (count == 0)
				{
					cout << "查找到的学生信息为：\n\n";
				}
				outPutStu(stuArry[i]);
				count++;
			}
		}
		break;
	case 3:
		return;
	}
	if (0 == count)
	{
		cout << "没有找到符合条件的学生信息!\n\n";
	}
}

//成绩排序
void StuSort(SS *stuArry)
{
	int way = 0;
	int max = stuArry[M - 1].total, min = stuArry[M - 1].total, maxIndex = M - 1, minIndex = M - 1;
	while (true)
	{
		cout << "请输入排序方式（0升序，1降序）：";
		cin >> way;
		if (way != 0 && way != 1)
		{
			cout << "请输入有效的方式！\n\n";
		}
		else
			break;
	}
	switch (way)
	{
	case 0:
		//升序
		for (int i = M - 1; i > 0; i--)
		{
			for (int j = 0; j <= i; j++)
			{
				if (stuArry[j].total > max)
				{
					max = stuArry[j].total;
					maxIndex = j;
				}
			}
			swap(stuArry[maxIndex], stuArry[i]);
		}
		cout << "升序排序后的学生信息列表：\n\n";
		for (int i = 0; i < M; i++)
		{
			outPutStu(stuArry[i]);
		}
		break;
	case 1:
		//降序
		cout << "降序排序后的学生信息列表：\n\n";
		for (int i = M - 1; i > 0; i--)
		{
			for (int j = 0; j <= i; j++)
			{
				if (stuArry[j].total < min)
				{
					min = stuArry[j].total;
					minIndex = j;
				}
			}
			swap(stuArry[minIndex], stuArry[i]);
		}
		for (int i = 0; i < M; i++)
		{
			outPutStu(stuArry[i]);
		}
		break;
	}
}
int main(void)
{
	SS stuArry[M];
	int scoreArry[M][N];
	//每行表示一个同学的成绩
	for (int i = 0; i < M; i++)
	{
		stuArry[i].scoreArry = scoreArry[i];
	}
	char tmp;
	//输入学生成绩
	for (int i = 0; i < M; i++)
	{
		cout << "请输入第" << i + 1 << "位同学的姓名：";
		cin >> stuArry[i].name;
		for (int j = 0; j < N; j++)
		{
			cout << "请输入" << stuArry[i].name << "的第" << j + 1 << "门课程的成绩：";
			cin >> stuArry[i].scoreArry[j];
			fflush(stdin);
			cin.clear();
			if (stuArry[i].scoreArry[j] > 100 || stuArry[i].scoreArry[j] < 0)
			{
				cout << "请重新输入" << stuArry[i].name << "的第" << j + 1 << "门课程的成绩：";
				j--;
				continue;
			}
		}
	}

	cout << endl << endl;
	//计算每个学生的总分
	totalScores(stuArry);
	int command;
	while (true)
	{
		cout << "请输入要进行的操作(0查找，1排序)：";

		cin >> command;
		//while (cin >> tmp)continue;

		if (command != 0 && command != 1)
		{
			cout << "请输入正确的指令！\n\n";
			continue;
		}
		switch (command)
		{
		case 0:
			//查找学生
			StuSerch(stuArry);
			break;
		case 1:
			//成绩排序
			StuSort(stuArry);
			break;
		}
	}
	system("pause");
	return 0;
}