#define _CRT_SECURE_NO_WARNINGS 1

#include"BinaryTree.h"

BTNode* BinaryTreeCreate(BTDataType* a, int* pi)// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
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

void BinaryTreeDestory(BTNode* root)// ����������
{
	if (root == NULL)
		return;
	//���ú����ķ�ʽ����
	BinaryTreeDestory(root->_left);
	BinaryTreeDestory(root->_right);
	free(root);
}

int BinaryTreeSize(BTNode* root)// �������ڵ����
{
	if (root == NULL)
		return 0;

	return 1 + BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right);
}

int BinaryTreeLeafSize(BTNode* root)// ������Ҷ�ӽڵ����
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL && root->_right == NULL)
		return 1;

	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}

int BinaryTreeLevelKSize(BTNode* root, int k)// ��������k��ڵ����
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;

	return BinaryTreeLevelKSize(root->_left, k-1)+BinaryTreeLevelKSize(root->_right, k-1);
}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)// ����������ֵΪx�Ľڵ�
{
	if (root == NULL)
		return NULL;
	if (root->_data == x)
		return root;
	
	//������ȥ���ң�����ҵ��ͷ�����һ��
	struct BinaryTreeNode* tmp = BinaryTreeFind(root->_left, x);
	if (tmp)
		return tmp;
	//������û�ҵ����͵�����ȥ��
	tmp = BinaryTreeFind(root->_right, x);
	if (tmp)
		return tmp;

	return NULL;
}

void BinaryTreePrevOrder(BTNode* root)// ������ǰ�����
{
	if (root == NULL)
		return;

	printf("%c ", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}

void BinaryTreeInOrder(BTNode* root)// �������������
{
	if (root == NULL)
		return;

	BinaryTreeInOrder(root->_left);
	printf("%c ", root->_data);
	BinaryTreeInOrder(root->_right);
}

void BinaryTreePostOrder(BTNode* root)// �������������
{
	if (root == NULL)
		return;

	BinaryTreePostOrder(root->_left);
	BinaryTreePostOrder(root->_right);
	printf("%c ", root->_data);
}

#include"queue.h"
void BinaryTreeLevelOrder(BTNode* root)// �������,����������ʵ�֣�ȡ��һ���ڵ㣬�����������Ӻ��Һ��ӣ�ȫ��ȡ�����ǲ���
{
	Queue q;
	QueueInit(&q);
	if (root != NULL)
	{
		QueuePush(&q, root);//�ȰѸ��ڵ���������
	}

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);//��ȡͷ��Ԫ��
		QueuePop(&q);//ȡ����ͷ

		printf("%c ", front->_data);
		if (front->_left)
			QueuePush(&q, front->_left);//����ڵ������
		if (front->_right)
			QueuePush(&q, front->_right);//��������Һ���
	}
	QueueDestroy(&q);
}

//��ȫ����������������������ţ�����ϵĶ�����
int BinaryTreeComplete(BTNode* root)// �ж϶������Ƿ�����ȫ������
{
	Queue q;
	QueueInit(&q);
	if (root != NULL)
		QueuePush(&q, root);//�ȰѸ��ڵ���������

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);//��ȡͷ��Ԫ��
		QueuePop(&q);//ȡ����ͷ
		if (front == NULL)
			break;
		QueuePush(&q, front->_left);//����ڵ������
		QueuePush(&q, front->_right);//��������Һ���
	}

	//����������ˣ���ô�Ϳ��ź�����û��feikong
	//����У���ô�������������ģ��Ͳ�����ȫ������
	//û�зǿգ�������ȫ������
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);//��ȡͷ��Ԫ��
		QueuePop(&q);//ȡ����ͷ

		if (front != NULL)
			return 0;
	}
	return 1;//
}