#define _CRT_SECURE_NO_WARNINGS 1

#include"BinaryTree.h"

BTNode* BinaryTreeCreate(BTDataType* a, int* pi)// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
{
	if (a[*pi] == '#')
		return NULL;
	else
	{
		
		BTNode* root = malloc(sizeof(BTNode));
		root->_data = a[*pi];
		++(*pi);
		root->_left = BinaryTreeCreate(a, pi);
		++(*pi);
		root->_right = BinaryTreeCreate(a, pi);

		return root;
	}
}

void BinaryTreeDestory(BTNode* root)// 二叉树销毁
{
	if (root == NULL)
		return;
	//采用后续的方式销毁
	BinaryTreeDestory(root->_left);
	BinaryTreeDestory(root->_right);
	free(root);
}

int BinaryTreeSize(BTNode* root)// 二叉树节点个数
{
	if (root == NULL)
		return 0;

	return 1 + BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right);
}

int BinaryTreeLeafSize(BTNode* root)// 二叉树叶子节点个数
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL && root->_right == NULL)
		return 1;

	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}

int BinaryTreeLevelKSize(BTNode* root, int k)// 二叉树第k层节点个数
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;

	return BinaryTreeLevelKSize(root->_left, k-1)+BinaryTreeLevelKSize(root->_right, k-1);
}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)// 二叉树查找值为x的节点
{
	if (root == NULL)
		return NULL;
	if (root->_data == x)
		return root;
	
	//到左树去查找，如果找到就返回上一层
	struct BinaryTreeNode* tmp = BinaryTreeFind(root->_left, x);
	if (tmp)
		return tmp;
	//若左树没找到，就到右树去找
	tmp = BinaryTreeFind(root->_right, x);
	if (tmp)
		return tmp;

	return NULL;
}

void BinaryTreePrevOrder(BTNode* root)// 二叉树前序遍历
{
	if (root == NULL)
		return;

	printf("%c ", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}

void BinaryTreeInOrder(BTNode* root)// 二叉树中序遍历
{
	if (root == NULL)
		return;

	BinaryTreeInOrder(root->_left);
	printf("%c ", root->_data);
	BinaryTreeInOrder(root->_right);
}

void BinaryTreePostOrder(BTNode* root)// 二叉树后序遍历
{
	if (root == NULL)
		return;

	BinaryTreePostOrder(root->_left);
	BinaryTreePostOrder(root->_right);
	printf("%c ", root->_data);
}

#include"queue.h"
void BinaryTreeLevelOrder(BTNode* root)// 层序遍历,借助队列来实现，取出一个节点，放入他的左孩子和右孩子，全部取出便是层序
{
	Queue q;
	QueueInit(&q);
	if (root != NULL)
	{
		QueuePush(&q, root);//先把根节点放入队列里
	}

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);//获取头部元素
		QueuePop(&q);//取出队头

		printf("%c ", front->_data);
		if (front->_left)
			QueuePush(&q, front->_left);//存入节点的左孩子
		if (front->_right)
			QueuePush(&q, front->_right);//存入结点的右孩子
	}
	QueueDestroy(&q);
}

//完全二叉树：层序遍历连续挨着，不间断的二叉树
int BinaryTreeComplete(BTNode* root)// 判断二叉树是否是完全二叉树
{
	Queue q;
	QueueInit(&q);
	if (root != NULL)
		QueuePush(&q, root);//先把根节点放入队列里

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);//获取头部元素
		QueuePop(&q);//取出队头
		if (front == NULL)
			break;
		QueuePush(&q, front->_left);//存入节点的左孩子
		QueuePush(&q, front->_right);//存入结点的右孩子
	}

	//如果出到空了，那么就看着后面有没有feikong
	//如果有，那么做层序不是连续的，就不是完全二叉树
	//没有非空，则是完全二叉树
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);//获取头部元素
		QueuePop(&q);//取出队头

		if (front != NULL)
			return 0;
	}
	return 1;//
}