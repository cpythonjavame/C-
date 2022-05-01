#include "game.h"

void board0(char arr[X][Y],int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void print(char arr[X][Y], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			if (j < y -1)
			{
				printf(" %c |", arr[i][j]);
			}
			else
				printf(" %c ", arr[i][j]);
		}
		printf("\n");
		for (j = 0; j < y; j++)
		{
			if (i < x - 1)
			{
				if (j < y - 1)
				{
					printf("___|");
				}
				else
					printf("___");
			}
			else if(j < y - 1)
				printf("   |");
		}
		printf("\n");
	}
	printf("\n");
}


void play(char arr[X][Y], int x, int y)
{
	int m = 0;
	int n = 0;
	int flag = 0;
	do
	{
		printf("玩家先走->\n");
		printf("请输入要走的坐标：");
		scanf("%d %d", &m, &n);
		if ((m >= 1 && m <= X) && (n >= 1 && n <= X))
		{
			if (arr[m - 1][ n- 1] == ' ')
			{
				arr[m - 1][n - 1] = '*';
				print( arr, x, y);
				break;
			}
			else
			{
				flag = 1;
				printf("坐标已被占用请重新选择\n");
			}
		}
		else
		{
			flag = 1;
			printf("你输入的坐标有误，请重新输入\n");
		}
	} while (flag);
}

void computer(char arr[X][Y],int x,int y)
{
	int s = 0, t = 0;
	do
	{
		s = rand() % 3;
		t = rand() % 3;
		if (arr[s][t] == ' ')
		{
			printf("电脑先走->\n");
			arr[s][t] = '#';
			print(arr, X, Y);
			break;
		}
	} while (1);
}

char iswin(char arr[X][Y], int x, int y)
{
	int i = 0, j = 0;
	char d = 'P';
	for (i = 0; i < x; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
			return arr[i][0];
	}
	for (i = 0; i < y; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
			return arr[0][i];
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			if (arr[i][j] == ' ')
			{
				d = 'C';
				goto tip;
			}
		}
	}
tip:
	return d;
}

