//��������
//1��Ϊʲôslow��fastһ�����ڻ����������᲻���ڻ���������Զ�����ϣ���֤��һ�� ���ۣ�����һ��������
// ������
// 1��slowһ����һ�� fastһ�������� fast���Ƚ���
// 2��fast��slow�ľ�����N ��fast������ʼ׷��slow ÿ��һ��׷2-1=1�� �����һ N-1 N-2.....1 0
// �������Ϊ���ʱ�� �������� ����һ��������
//2��Ϊʲôslow��һ����fast�������أ��ܲ���fast��һ����N���أ�N>2������֤��һ�� ���ۣ�fastһ����N�� N>2��һ��������
//������
// 1������slow��һ����fast������ ��ʼ׷��� ÿ��һ�� �������2 N N-2 N-3 
// 2�����N������ ������Ϊ 1 -1 ����Ϊ-1����˼�� fast��slow��ǰһ�� ���ߵľ����Ϊc-1 cΪ���ĳ���
// 3�����c-1������ �򲻻����� ���c-1��ż�� ����߿�������
//
//3�������������ʼ�ڵ�
//L��ʾ������ͷ��������ʼ��ľ��� x����ʼ�㵽������ľ���
//������������ָ���߾���Ϊ
//Slow L + X
//Fast L + N * C + X(N������ǰfast�߹���Ȧ��)
//Fast = 2slow
//L + N * C + X = 2(L + X)
//L + X = N * C
//L = (N - 1)C + C - X
//������ָ���߹�L��·�� ��ָ����ѭ�����߹�N - 1Ȧ ��c - x�ľ���
//������ָ��ӿ�ͷ��L�� ��ָ���x(������)�� �����ڿ�ʼ�ڵ�����


//˼·һ ÿ��һ�� ���ýڵ���֮ǰ�Ľڵ���Ƚ� ����ͬ���򷵻�true  ���ؿ�ָ�뷵��FALSE
//ʱ�临�Ӷ�ΪO��n^2��
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



//˼·�� ���ÿ���ָ�� ���û��ѭ���Ļ� ��ָ����ȱ�Ϊ��ָ�� 
//��ѭ���Ļ�����ָ�벻���Ϊ��ָ�� ��׷����ָ��
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



//Ѱ����ʼ��
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
