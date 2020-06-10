#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	ofstream outFlie("../outText.txt");
	ofstream filego("./here", ios::binary);
	cout << "请输入要写入outText中的文字:";
	cin >> str;
	outFlie << str;
	cout << "成功将\"" << str << "\"写入到文件中!\n";
	outFlie.close();

	outFlie.open("../outText.txt", ios::app);
	cout << "请输入要追加的文字：";
	cin >> str;
	outFlie << str;
	cout << "成功将\"" << str << "\"写入到文件中!\n";
	outFlie.close();

	system("pause");
	return 0;
}