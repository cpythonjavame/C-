#include <stdio.h>

int main()
{
	int amount=0;
	
	int price=0;
	
	printf("请输入票面：");
	
	scanf("%d",&amount);
	
	printf("请输入金额：");
	
	scanf("%d",&price);
	
	double change=pow(amount,price);;
	
	printf("%f\n",change);
	 
	return 0;
}

