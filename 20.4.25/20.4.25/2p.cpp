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

//����ÿ��ѧ�����ܷ�
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
//��ʾѧ����Ϣ
void outPutStu(SS &stu)
{
	cout << "ѧ��������" << stu.name << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "��" << i + 1 << "�ſεĳɼ���" << stu.scoreArry[i] << endl;
	}
	cout << "�ܷ֣�" << stu.total << endl << endl;
}

void swap(SS &stu1, SS &stu2)
{
	SS tmp;
	//��������
	strcpy_s(tmp.name, NAME_LENGTH, stu1.name);
	strcpy_s(stu1.name, NAME_LENGTH, stu2.name);
	strcpy_s(stu2.name, NAME_LENGTH, tmp.name);
	//���������б�
	tmp.scoreArry = stu1.scoreArry;
	stu1.scoreArry = stu2.scoreArry;
	stu2.scoreArry = tmp.scoreArry;
	//�����ܷ�
	tmp.total = stu1.total;
	stu1.total = stu2.total;
	stu2.total = tmp.total;
}

//����ѧ��
void StuSerch(SS * stuArry)
{
	char serch_name[NAME_LENGTH];
	int serch_total;
	int serch_index, serch_score;
	cout << "���������������0��������1���ܳɼ���2�����Ƴɼ���3�˳����ң���";
	int count = 0, way;
	while (true)
	{
		cin >> way;
		if (way != 0 && way != 1 && way != 2 && way != 3)
		{
			cout << "��������ȷ�Ĳ���������";
			continue;
		}
		else
			break;
	}

	//����
	switch (way)
	{
	case 0:
		cout << "������ѧ��������";
		cin >> serch_name;
		for (int i = 0; i < M; i++)
		{
			if (strcmp(serch_name, stuArry[i].name) == 0)
			{
				if (count == 0)
				{
					cout << "���ҵ���ѧ����ϢΪ��\n\n";
				}
				outPutStu(stuArry[i]);
				count++;
			}
		}
		break;
	case 1:
		cout << "������ѧ���ܷ֣�";
		cin >> serch_total;
		for (int i = 0; i < M; i++)
		{
			if (serch_total == stuArry[i].total)
			{
				if (count == 0)
				{
					cout << "���ҵ���ѧ����ϢΪ��\n\n";
				}
				outPutStu(stuArry[i]);
				count++;
			}
		}
		break;
	case 2:
		while (true)
		{
			cout << "������Ҫ���ҵĿγ̣�";

			cin >> serch_index;
			if (serch_index > 0 && serch_index <= N)
			{
				break;
			}
			else
			{
				cout << "�γ̱�Ų��ڷ�Χ�ڣ����Ϊ" << N << endl << endl;
			}
		}
		cout << "��������ſγ̷�����";
		cin >> serch_score;
		for (int i = 0; i < M; i++)
		{
			if (serch_score == stuArry[i].scoreArry[serch_index - 1])
			{
				if (count == 0)
				{
					cout << "���ҵ���ѧ����ϢΪ��\n\n";
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
		cout << "û���ҵ�����������ѧ����Ϣ!\n\n";
	}
}

//�ɼ�����
void StuSort(SS *stuArry)
{
	int way = 0;
	int max = stuArry[M - 1].total, min = stuArry[M - 1].total, maxIndex = M - 1, minIndex = M - 1;
	while (true)
	{
		cout << "����������ʽ��0����1���򣩣�";
		cin >> way;
		if (way != 0 && way != 1)
		{
			cout << "��������Ч�ķ�ʽ��\n\n";
		}
		else
			break;
	}
	switch (way)
	{
	case 0:
		//����
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
		cout << "����������ѧ����Ϣ�б�\n\n";
		for (int i = 0; i < M; i++)
		{
			outPutStu(stuArry[i]);
		}
		break;
	case 1:
		//����
		cout << "����������ѧ����Ϣ�б�\n\n";
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
	//ÿ�б�ʾһ��ͬѧ�ĳɼ�
	for (int i = 0; i < M; i++)
	{
		stuArry[i].scoreArry = scoreArry[i];
	}
	char tmp;
	//����ѧ���ɼ�
	for (int i = 0; i < M; i++)
	{
		cout << "�������" << i + 1 << "λͬѧ��������";
		cin >> stuArry[i].name;
		for (int j = 0; j < N; j++)
		{
			cout << "������" << stuArry[i].name << "�ĵ�" << j + 1 << "�ſγ̵ĳɼ���";
			cin >> stuArry[i].scoreArry[j];
			fflush(stdin);
			cin.clear();
			if (stuArry[i].scoreArry[j] > 100 || stuArry[i].scoreArry[j] < 0)
			{
				cout << "����������" << stuArry[i].name << "�ĵ�" << j + 1 << "�ſγ̵ĳɼ���";
				j--;
				continue;
			}
		}
	}

	cout << endl << endl;
	//����ÿ��ѧ�����ܷ�
	totalScores(stuArry);
	int command;
	while (true)
	{
		cout << "������Ҫ���еĲ���(0���ң�1����)��";

		cin >> command;
		//while (cin >> tmp)continue;

		if (command != 0 && command != 1)
		{
			cout << "��������ȷ��ָ�\n\n";
			continue;
		}
		switch (command)
		{
		case 0:
			//����ѧ��
			StuSerch(stuArry);
			break;
		case 1:
			//�ɼ�����
			StuSort(stuArry);
			break;
		}
	}
	system("pause");
	return 0;
}