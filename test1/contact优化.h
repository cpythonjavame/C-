#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100


typedef struct contact
{
	char name[15];
	int age;
	char sex[10];
	char tel[20];
	char addr[20];
}contact;

typedef struct text
{
	contact data[MAX];
	int sz;
}text;

//�˵�
void menu();
//��ʼ��ͨѶ¼
void inicontact(text* p);
//������ϵ��
void Addcontact(text* p);
//ɾ����ϵ��
void Delcontact(text* p);
//��ӡ��ǰ������ϵ��
void print(text* p);
//���������绰������ϵ�ˣ������±�
int find(text* p);
//������ҵ�����ϵ��
void Seacontact(text* p);
//�޸���ϵ����Ϣ
void Modcontact(text* p);
//������������
void Sortcontact(text* p);
//������ϵ����Ϣ
void Savecontact(text* p);
//�����ϴα����ͨѶ¼
void Loadcontact(text* p);