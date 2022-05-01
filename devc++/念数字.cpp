#include <stdio.h>
int main(){
	int n,c=0,i,t;
	scanf("%d",&n);
	if(n==0)
	{
		printf("ling");
		return 0;
	}
	if(n<0)
	{
		printf("fu ");
		n=-n;
	}
	int x=n;
	while (x>0)
	{
		x/=10;
		c++;
	}
	int a[c];
	for (i=c-1;i>-1;i--)
	{
		t=n%10;
		n/=10;
		a[i]=t;
	}
	for (i=0;i<c;i++){
	
	switch(a[i])
	{
		case 0:printf("ling");break;
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;
	}
	     if(i!=c-1)
		 printf(" ");      
    }
	return 0;
}
