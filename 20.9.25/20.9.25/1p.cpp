#include<iostream>
using namespace std;
#define ADD(x,y) x+y
#define MUL(x,y) x*y

int main()
{
	/*char str[3][2] = { 'F', 'U', 'T', 'R', 'U', 'E' };
	str[1][0] = '\0';
	printf("%s", str[0]);*/
	int k = 4;
	/*for (int i = 0; k = 1, k = -1; i++, k++)
	{
		cout << i << endl;
	}*/
	k += MUL(k, ADD(k, k));
	cout << k << endl;
	system("pause");
	return 0;
}