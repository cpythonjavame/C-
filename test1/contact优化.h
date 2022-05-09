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

//菜单
void menu();
//初始化通讯录
void inicontact(text* p);
//增加联系人
void Addcontact(text* p);
//删除联系人
void Delcontact(text* p);
//打印当前所有联系人
void print(text* p);
//根据姓名电话查找联系人，返回下标
int find(text* p);
//输出查找到的联系人
void Seacontact(text* p);
//修改联系人信息
void Modcontact(text* p);
//根据名字排序
void Sortcontact(text* p);
//保存联系人信息
void Savecontact(text* p);
//加载上次保存的通讯录
void Loadcontact(text* p);