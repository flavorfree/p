#define _CRT_SECURE_NO_WARNINGS 1

#include"BinaryTree.h"

int main()
{
	char a[100] = "ABD##E#H##CF##G##";
	
	int i = 0;
	BTNode*root = BinaryTreeCreate(a,&i);

	BinaryTreePrevOrder(root);//Ç°Ðò
	printf("\n");
	BinaryTreeInOrder(root);//ÖÐÐò
	printf("\n");
	BinaryTreePostOrder(root);//ºóÐò
	printf("\n");

	int num = BinaryTreeSize(root);
	printf("%d\n", num);

	int leafnum = BinaryTreeLeafSize(root);
	printf("%d\n", leafnum);

	int levelnum = BinaryTreeLevelKSize(root,3);
	printf("%d\n", levelnum);

	BTNode* ret = BinaryTreeFind(root, 'E');
	printf("%c\n", ret->_data);

	BinaryTreeLevelOrder(root);
	printf("\n");

	printf("%d\n", BinaryTreeComplete(root));

	system("pause");
	return 0;
}