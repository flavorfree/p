#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

//删除链表中等于给定值 val 的所有节点

typedef struct ListNode ListNode;
struct ListNode* removeElements(struct ListNode* head, int val){

	ListNode* cur = head;
	ListNode* prev = NULL;
	while (cur != NULL)
	{
		if (cur->val == val)
		{
			ListNode* next = cur->next;
			free(cur);
			if (cur == head)
			{
				head = next;
			}
			else
			{
				prev->next = next;
			}

			cur = next;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}
