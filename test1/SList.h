#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define SLNdatatype int

typedef struct SListNode
{
	SLNdatatype data;
	struct SListNode* next;
}SLNode;

void SListprint(SLNode* phead);
void SListNodepushback(SLNode** phead, SLNdatatype x);
void SListNodepushfront(SLNode** phead, SLNdatatype x);
void SListNodepopback(SLNode** phead);
void SListNodepopfront(SLNode** phead);
SLNode* SListFind(SLNode* phead, SLNdatatype x);
void SListInsert(SLNode** phead, SLNode* pos, SLNdatatype x);
void SListErase(SLNode** phead, SLNode* pos);