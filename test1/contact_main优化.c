#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

int main()
{
	int input = 0;
	text t;
	inicontact(&t);
	do
	{
		menu();
		printf("��������ѡ��Ĳ�����\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			Savecontact(&t);
			printf("�˳�ͨѶ¼\n");
			exit(0);
		case 1:
			Addcontact(&t);
			break;
		case 2:
			Delcontact(&t);
			break;
		case 3:
			Seacontact(&t);
			break;
		case 4:
			Modcontact(&t);
			break;
		case 5:
			Sortcontact(&t);
			break;
		case 6:
			print(&t);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}