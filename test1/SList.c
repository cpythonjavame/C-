#define _CRT_SECURE_NO_WARNINGS 1


#include "SList.h"

//打印
void SListprint(SLNode* phead)
{
	SLNode* ptr = phead;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
}

//尾插
void SListNodepushback(SLNode** phead, SLNdatatype x)
{
	SLNode* pp = (SLNode*)malloc(sizeof(SLNode));
	if (pp == NULL)
	{
		printf("内存不够\n");
		exit(-1);
	}
	else
	{
		pp->data = x;
		pp->next = NULL;
		if (*phead == NULL)
		{
			*phead = pp;
		}
		else
		{
			SLNode* tail = *phead;
			while (tail->next != NULL)
			{
				tail = tail->next;
			}
			tail->next = pp;
		}
	}
}

//头插,不用考虑头结点为NULL的情况
void SListNodepushfront(SLNode** phead, SLNdatatype x)
{
	SLNode* pp = (SLNode*)malloc(sizeof(SLNode));
	if (pp == NULL)
	{
		printf("内存不够\n");
		exit(-1);
	}
	else
	{
		pp->data = x;
		pp->next = NULL;
		pp->next = *phead;
		*phead = pp;
	}
}

//尾删
void SListNodepopback(SLNode** phead)
{
	if (*phead == NULL)
	{
		printf("该链表为空，无需删除\n");
		return;
	}
	SLNode* pp = *phead;
	if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		while (pp->next->next != NULL)
		{
			pp = pp->next;
		}
		free(pp->next);
		pp->next = NULL;
	}
}

//头删
void SListNodepopfront(SLNode** phead)
{
	if (*phead == NULL)
	{
		printf("该链表为空，无需删除\n");
		return;
	}
	SLNode* pp = (*phead)->next;
	free(*phead);
	*phead = pp;
}

//查找,还可以修改
SLNode* SListFind(SLNode* phead, SLNdatatype x)
{
	assert(phead != NULL);
	SLNode* p = phead;
	while (p != NULL && p->data != x)
	{
		p = p->next;
	}
	if (p == NULL)
	{
		printf("查不到\n");
	}
	return p;
}

//在pos位置之前插入
void SListInsert(SLNode** phead, SLNode* pos, SLNdatatype x)
{
	SLNode* pp = *phead;
	while (pp != NULL && pp->next != pos)
	{
		pp = pp->next;
	}
	if (pp == NULL)
	{
		printf("找不到\n");
		return;
	}
	if (*phead == pos)
	{
		SListNodepushfront(phead, x);
	}
	else
	{
		SLNode* ptr = (SLNode*)malloc(sizeof(SLNode));
		if (ptr == NULL)
		{
			printf("内存不够\n");
			exit(-1);
		}
		else
		{
			ptr->data = x;
			ptr->next = pos;
			pp->next = ptr;
		}
	}
}

//在pos位置之后删除
void SListErase(SLNode** phead, SLNode* pos)
{
	if (*phead == NULL)
	{
		printf("该链表为空，无需删除\n");
		return;
	}
	SLNode* p = *phead;
	while (p != NULL && p != pos)
	{
		p = p->next;
	}
	if (p == NULL)
	{
		printf("找不到可删的元素\n");
		return;
	}
	if (p->next == NULL)
	{
		SListNodepopfront(phead);
		return;
	}
	else 
	{
		SLNode* pp = p->next;
		p->next = pp->next;
		free(pp);
	}
}
	