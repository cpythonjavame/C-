#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
void menu()
{
	printf("������������еĲ�����'+':1 '-':2 '*':3 '/':4 �˳�:0��\n");
}
double a(double x, double y)
{
	return x + y;
}
double b(double x, double y)
{
	return x - y;
}
double c(double x, double y)
{
	return x * y;
}
double d(double x, double y)
{
	return x / y;
}
int main()
{
	menu();
	double (*ppr[5])(double, double) = { NULL,a,b,c,d };
	int n = 0;
	double i = 0, j = 0;
	do
	{
		scanf("%d", &n);
		if (n <= 4 && n >= 1)
		{
			printf("����������������\n");
			scanf("%lf %lf", &i, &j);
			printf("%.3f\n", ppr[n](i, j));
			break;
		}
		else if (n == 0)
		{
			printf("�˳�����\n");
			break;
		}
		else
			printf("ѡ���������������\n");
	} while (n);
	return 0;
}
