#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu()
{
	printf("*****************************\n");
	printf("*****1.添加        2.删除*****\n");
	printf("*****3.查找        4.修改*****\n");
	printf("*****5.排序        6.打印*****\n");
	printf("*****0.退出        ***********\n");
	printf("*****************************\n");
}

void inicontact(text* p)
{
	p->sz = 0;
	memset(p->data,0,sizeof(p->data));
}

void Addcontact(text* p)
{
	if (p->sz == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入姓名：\n");
		scanf("%s", (*p).data[p->sz].name);
		printf("请输入年龄：\n");
		scanf("%d", &((*p).data[p->sz].age));
		printf("请输入性别：\n");
		scanf("%s", (*p).data[p->sz].sex);
		printf("请输入电话：\n");
		scanf("%s", (*p).data[p->sz].tel);
		printf("请输入地址：\n");
		scanf("%s", (*p).data[p->sz].addr);
		p->sz++;
	}
}

void Delcontact(text* p)
{
	if (p->sz == 0)
	{
		printf("通讯录为0，无需删减\n");
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
				printf("删除成功\n");
			}
			p->sz--;
		}
		else
			printf("未查询到此人\n");
	}
}

int find(text* p)
{
	char name[15] = { 0 };
	printf("请输入姓名：\n");
	char tel[20] = { 0 };
	scanf("%s", name);
	printf("请输入电话：\n");
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
		printf("查无此人\n");
	}
}

void Modcontact(text* p)
{
	int i = find(p);
	if (i >= 0)
	{
		printf("请输入修改后姓名：\n");
		scanf("%s", (*p).data[i].name);
		printf("请输入修改后年龄：\n");
		scanf("%d", &((*p).data[i].age));
		printf("请输入修改后性别：\n");
		scanf("%s", (*p).data[i].sex);
		printf("请输入修改后电话：\n");
		scanf("%s", (*p).data[i].tel);
		printf("请输入修改后地址：\n");
		scanf("%s", (*p).data[i].addr);
	}
	else
	{
		printf("查无此人\n");
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
	printf("按姓名首字母排序完成\n");
}

void print(text* p)
{
	printf("%-15s\t %-5s\t %-8s\t %-11s\t %-15s\n", "姓名", "年龄", "性别", "电话", "地址");
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		printf("%-15s\t %-5d\t %-8s\t %-11s\t %-15s\n", p->data[i].name,  p->data[i].age, p->data[i].sex, p->data[i].tel, p->data[i].addr);
	}
}
