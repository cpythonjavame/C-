#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

//void test1()
//{
//	SLNode* p = NULL;
//	SListNodepushback(&p, 1);
//	SListNodepushback(&p, 2);
//	SListNodepushback(&p, 3);
//	SListNodepushback(&p, 4);
//	SListNodepushfront(&p, 5);
//	SListNodepushfront(&p, 6);
//	SListNodepushfront(&p, 7);
//	SListNodepopback(&p);
//	SListNodepopback(&p);
//	SListNodepopback(&p);
//	SListNodepopfront(&p);
//	SListNodepopfront(&p);
//	SListNodepopfront(&p);
//	SListNodepopfront(&p);
//	SListNodepopfront(&p);
//	SListNodepopfront(&p);
//	SListprint(p);
//}

void test1()
{
	int i = 0;
	SLNode* p = NULL;
	SListNodepushback(&p, 1);
	SListNodepushback(&p, 2);
	SListNodepushback(&p, 3);
	SListNodepushback(&p, 4);
	SListNodepushfront(&p, 5);
	SListNodepushfront(&p, 5);
	SListNodepushfront(&p, 5);
	SListNodepushfront(&p, 6);
	SListNodepushfront(&p, 7);
	SLNode* ptr = SListFind(p, 5);
	while (ptr)
	{
		printf("第%d个节点：%p->%d\n", i++, ptr, ptr->data);
		ptr = SListFind(ptr->next, 5);
	}
	SListInsert(&p, SListFind(p, 6) , 100);
	SListErase(&p, SListFind(p, 6));
	SListprint(p);
}

int main()
{
	test1();
	return 0;
}