#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu()
{
	printf("*****************************\n");
	printf("*****1.���        2.ɾ��*****\n");
	printf("*****3.����        4.�޸�*****\n");
	printf("*****5.����        6.��ӡ*****\n");
	printf("*****0.�˳�        ***********\n");
	printf("*****************************\n");
}

void inicontact(text* p)
{
	p->sz = 0;
	memset(p->data,0,sizeof(p->data));
	Loadcontact(p);
}

void Addcontact(text* p)
{
	if (p->sz == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("������������\n");
		scanf("%s", (*p).data[p->sz].name);
		printf("���������䣺\n");
		scanf("%d", &((*p).data[p->sz].age));
		printf("�������Ա�\n");
		scanf("%s", (*p).data[p->sz].sex);
		printf("������绰��\n");
		scanf("%s", (*p).data[p->sz].tel);
		printf("�������ַ��\n");
		scanf("%s", (*p).data[p->sz].addr);
		p->sz++;
	}
}

void Delcontact(text* p)
{
	if (p->sz == 0)
	{
		printf("ͨѶ¼Ϊ0������ɾ��\n");
	}
	else
	{
		int flag = find(p);
		if (flag >= 0)
		{
			int i = 0;
			for (i = flag; i < p->sz; i++)
			{
				p->data[i] = p->data[i + 1];
				printf("ɾ���ɹ�\n");
			}
			p->sz--;
		}
		else
			printf("δ��ѯ������\n");
	}
}

int find(text* p)
{
	char name[15] = { 0 };
	printf("������������\n");
	char tel[20] = { 0 };
	scanf("%s", name);
	printf("������绰��\n");
	scanf("%s", tel);
	int i = 0;
	int flag = -1;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(p->data[i].name, name) == 0 && strcmp(p->data[i].tel, tel) == 0)
		{
			flag = i;
			break;
		}
	}
	return flag;
}

void Seacontact(text* p)
{
	int i = find(p);
	if (i >= 0)
	{
		printf("%-15s\t %-5d\t %-8s\t %-11s\t %-15s\n", p->data[i].name, p->data[i].age, p->data[i].sex, p->data[i].tel, p->data[i].addr);
	}
	else
	{
		printf("���޴���\n");
	}
}

void Modcontact(text* p)
{
	int i = find(p);
	if (i >= 0)
	{
		printf("�������޸ĺ�������\n");
		scanf("%s", (*p).data[i].name);
		printf("�������޸ĺ����䣺\n");
		scanf("%d", &((*p).data[i].age));
		printf("�������޸ĺ��Ա�\n");
		scanf("%s", (*p).data[i].sex);
		printf("�������޸ĺ�绰��\n");
		scanf("%s", (*p).data[i].tel);
		printf("�������޸ĺ��ַ��\n");
		scanf("%s", (*p).data[i].addr);
	}
	else
	{
		printf("���޴���\n");
	}
}

void Sortcontact(text* p)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < p->sz; i++)
	{
		int flag = 1;
		for (j = 0; j < p->sz - i - 1; j++)
		{
			if (strcmp(p->data[j].name, p->data[j + 1].name) > 0)
			{
				contact t = p->data[j];
				p->data[j] = p->data[j + 1];
				p->data[j + 1] = t;
				flag = 0;
			}
		}
		if (flag)
			break;
	}
	printf("����������ĸ�������\n");
}

void print(text* p)
{
	printf("%-15s\t %-5s\t %-8s\t %-11s\t %-15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		printf("%-15s\t %-5d\t %-8s\t %-11s\t %-15s\n", p->data[i].name,  p->data[i].age, p->data[i].sex, p->data[i].tel, p->data[i].addr);
	}
}

void Savecontact(text* p)
{
	FILE* pp = fopen("contact.dat", "w");
	if (pp == NULL)
	{
		perror("Savecontact");
		return;
	}
	fwrite(p, sizeof(text), 1, pp);
	fclose(pp);
	pp = NULL;
}

void Loadcontact(text* p)
{
	FILE* pp = fopen("contact.dat", "r");
	if (pp == NULL)
	{
		perror("Savecontact");
		return;
	}
	fread(p, sizeof(text), 1, pp);
	fclose(pp);
	pp = NULL;
}