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
		printf("请输入你选择的操作：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			Savecontact(&t);
			printf("退出通讯录\n");
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}