#include "game.h"

void game()
{
	srand((unsigned)time(NULL));
	char arr[X][Y];
	board0(arr, X, Y);//初始化棋盘
	print(arr, X, Y);//打印棋盘
	while (1)
	{
		play(arr, X, Y);//玩家走
		computer(arr, X, Y);//电脑走
		char m = iswin(arr, X, Y);
		if (m == '*')
		{
			printf("你赢了\n");
			break;
		}
		else if (m == '#')
		{
			printf("你输了\n");
			break;
		}
		else if (m == 'P')
		{
			printf("平局\n");
			break;
		}
		print(arr, X, Y);
		if (m == 'C')
			printf("下的不错，加油！\n");
	}
}

int main()
{
	int input = 0;
	do
	{
		printf("***********************\n");
		printf("***********************\n");
		printf("******1--->玩游戏******\n");
		printf("******0----> 退出******\n");
		printf("***********************\n");
		printf("***********************\n");
		printf("请选择是否玩游戏：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			exit(0);
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}