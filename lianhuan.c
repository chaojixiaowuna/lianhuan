//延伸问题
//1、为什么slow和fast一定会在环中相遇？会不会在环里错过，永远遇不上？请证明一下 结论：他们一定会相遇
// 分析：
// 1、slow一次走一步 fast一次走两步 fast首先进环
// 2、fast和slow的距离是N ，fast进环后开始追逐slow 每走一步追2-1=1步 距离减一 N-1 N-2.....1 0
// 当距离减为零的时候 他们相遇 所以一定会相遇
//2、为什么slow走一步，fast走两步呢？能不能fast走一次走N步呢（N>2）？请证明一下 结论：fast一次走N步 N>2不一定会相遇
//分析：
// 1、假设slow走一步，fast走三步 则开始追逐后 每走一步 距离减少2 N N-2 N-3 
// 2、如果N是奇数 最后距离为 1 -1 距离为-1的意思是 fast在slow的前一个 二者的距离变为c-1 c为环的长度
// 3、如果c-1是奇数 则不会相遇 如果c-1是偶数 则二者可以相遇
//
//3、如何找链环起始节点
//L表示从链表开头到相遇起始点的距离 x是起始点到相遇点的距离
//在相遇点两个指针走距离为
//Slow L + X
//Fast L + N * C + X(N是相遇前fast走过的圈数)
//Fast = 2slow
//L + N * C + X = 2(L + X)
//L + X = N * C
//L = (N - 1)C + C - X
//所以慢指针走过L的路程 快指针在循环里走过N - 1圈 加c - x的距离
//所以慢指针从开头走L步 快指针从x(相遇出)走 两者在开始节点相遇


//思路一 每走一步 将该节点与之前的节点相比较 有相同的则返回true  返回空指针返回FALSE
//时间复杂度为O（n^2）
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<assert.h>
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//
//void ListDestroy(struct ListNode** tmp)
//{
//	struct ListNode* cur = *tmp;
//	while (cur)
//	{
//		*tmp = (*tmp)->next;
//		free(cur);
//		cur = (*tmp);
//	}
//}
//
//bool hasCycle(struct ListNode* head)
//{
//	struct ListNode* cur = head;
//	struct ListNode* cmp = head;
//	int count = 0,tmp=0;
//	assert(head);
//	while (cur)
//	{
//		cur = cur->next;
//		count++;
//		cmp = head;
//		tmp = count;
//		while (tmp--)
//		{
//			if (cur == cmp)
//			{
//				return true;
//			}
//			else
//			{
//				cmp = cmp->next;
//			}
//
//		}
//	}
//	return false;
//}
//void defend(struct ListNode* use)
//{
//	if (use == NULL)
//		exit(1);
//}
//int main()
//{
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	bool tmp;
//	defend(n1);
//	defend(n2);
//	defend(n3);
//	defend(n4);
//	defend(n5);
//	defend(n6);
//	if (n1 != NULL)
//	{
//		n1->val = 1;
//	}
//	else exit(-1);
//	if (n2 != NULL)
//	{
//		n2->val = 2;
//	}
//	else exit(-1);
//	if (n3 != NULL)
//	{
//		n3->val = 3;
//	}
//	else exit(-1);
//	if (n4 != NULL)
//	{
//		n4->val = 4;
//	}
//	else exit(-1);
//	if (n5 != NULL)
//	{
//		n5->val = 5;
//	}
//	else exit(-1);
//	if (n6 != NULL)
//	{
//		n6->val = 6;
//	}
//	else exit(-1);
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = n5;
//	n5->next = n6;
//	n6->next = n3;
//	tmp = hasCycle(n1);
//	printf("%d", tmp);
//	ListDestroy(&n1);
//	return 0;
//}



//思路二 利用快慢指针 如果没有循环的话 快指针会先变为空指针 
//有循环的话，快指针不会变为空指针 会追上慢指针
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<assert.h>
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//
//void ListDestroy(struct ListNode** tmp)
//{
//	struct ListNode* cur = *tmp;
//	while (cur)
//	{
//		*tmp = (*tmp)->next;
//		free(cur);
//		cur = NULL;
//		cur = (*tmp);
//	}
//}
//
//bool hasCycle(struct ListNode* head)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//	while (fast&&fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		if (slow == fast)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//void defend(struct ListNode* use)
//{
//	if (use == NULL)
//		exit(1);
//}
//int main()
//{
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	bool tmp;
//	defend(n1);
//	defend(n2);
//	defend(n3);
//	defend(n4);
//	defend(n5);
//	defend(n6);
//	if (n1 != NULL)
//	{
//		n1->val = 1;
//	}
//	else exit(-1);
//	if (n2 != NULL)
//	{
//		n2->val = 2;
//	}
//	else exit(-1);
//	if (n3 != NULL)
//	{
//		n3->val = 3;
//	}
//	else exit(-1);
//	if (n4 != NULL)
//	{
//		n4->val = 4;
//	}
//	else exit(-1);
//	if (n5 != NULL)
//	{
//		n5->val = 5;
//	}
//	else exit(-1);
//	if (n6 != NULL)
//	{
//		n6->val = 6;
//	}
//	else exit(-1);
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = n5;
//	n5->next = n6;
//	n6->next = n3;
//	tmp = hasCycle(n1);
//	printf("%d", tmp);
//	//ListDestroy(&n1);
//	return 0;
//}



//寻找起始点
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};
void ListPrint(struct ListNode* head)
{
	struct ListNode* cur = head;
	while (cur)
	{
		printf("%d", cur->val);
		cur = cur->next;
	}
}
void ListDestroy(struct ListNode** tmp)
{
	struct ListNode* cur = *tmp;
	while (cur)
	{
		*tmp = (*tmp)->next;
		free(cur);
		cur = NULL;
		cur = (*tmp);
	}
}

struct ListNode* hasCycle(struct ListNode* head)
{
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	struct ListNode* meet = NULL;
	while (fast&&fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
		{
			meet=fast;
			slow = head;
			while (meet != slow)
			{
				slow = slow->next;
				meet = meet->next;
			}
			return meet;
		}
	}

	return NULL;
}
void defend(struct ListNode* use)
{
	if (use == NULL)
		exit(1);
}
int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* tmp;
	defend(n1);
	defend(n2);
	defend(n3);
	defend(n4);
	defend(n5);
	defend(n6);
	if (n1 != NULL)
	{
		n1->val = 1;
	}
	else exit(-1);
	if (n2 != NULL)
	{
		n2->val = 2;
	}
	else exit(-1);
	if (n3 != NULL)
	{
		n3->val = 3;
	}
	else exit(-1);
	if (n4 != NULL)
	{
		n4->val = 4;
	}
	else exit(-1);
	if (n5 != NULL)
	{
		n5->val = 5;
	}
	else exit(-1);
	if (n6 != NULL)
	{
		n6->val = 6;
	}
	else exit(-1);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n3;
	tmp = hasCycle(n1);
	ListPrint(tmp);
	//ListDestroy(&n1);
	return 0;
}
