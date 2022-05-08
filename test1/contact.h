#pragma once
#include<stdio.h>
#include<string.h>

#define MAX 1000


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

void menu();
void inicontact(text* p);
void Addcontact(text* p);
void Delcontact(text* p);
void print(text* p);
int find(text* p);
void Seacontact(text* p);
void Modcontact(text* p);
void Sortcontact(text* p);