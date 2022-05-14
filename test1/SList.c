#define _CRT_SECURE_NO_WARNINGS 1


#include "SList.h"

//��ӡ
void SListprint(SLNode* phead)
{
	SLNode* ptr = phead;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
}

//β��
void SListNodepushback(SLNode** phead, SLNdatatype x)
{
	SLNode* pp = (SLNode*)malloc(sizeof(SLNode));
	if (pp == NULL)
	{
		printf("�ڴ治��\n");
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

//ͷ��,���ÿ���ͷ���ΪNULL�����
void SListNodepushfront(SLNode** phead, SLNdatatype x)
{
	SLNode* pp = (SLNode*)malloc(sizeof(SLNode));
	if (pp == NULL)
	{
		printf("�ڴ治��\n");
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

//βɾ
void SListNodepopback(SLNode** phead)
{
	if (*phead == NULL)
	{
		printf("������Ϊ�գ�����ɾ��\n");
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

//ͷɾ
void SListNodepopfront(SLNode** phead)
{
	if (*phead == NULL)
	{
		printf("������Ϊ�գ�����ɾ��\n");
		return;
	}
	SLNode* pp = (*phead)->next;
	free(*phead);
	*phead = pp;
}

//����,�������޸�
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
		printf("�鲻��\n");
	}
	return p;
}

//��posλ��֮ǰ����
void SListInsert(SLNode** phead, SLNode* pos, SLNdatatype x)
{
	SLNode* pp = *phead;
	while (pp != NULL && pp->next != pos)
	{
		pp = pp->next;
	}
	if (pp == NULL)
	{
		printf("�Ҳ���\n");
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
			printf("�ڴ治��\n");
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

//��posλ��֮��ɾ��
void SListErase(SLNode** phead, SLNode* pos)
{
	if (*phead == NULL)
	{
		printf("������Ϊ�գ�����ɾ��\n");
		return;
	}
	SLNode* p = *phead;
	while (p != NULL && p != pos)
	{
		p = p->next;
	}
	if (p == NULL)
	{
		printf("�Ҳ�����ɾ��Ԫ��\n");
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
	