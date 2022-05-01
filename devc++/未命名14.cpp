#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	if (n<0){
		printf("fu ");
		n=-n;
	}
	int t=n,count=0,u,i;
	do{
		t=t/10;
		count++;
	}while (t>0);
	for(i=count;i>0;i--){
		u=n/pow(10,i-1);
		n=n%(int)pow(10,i-1);
		switch(u){
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
		if(i!=1)
		printf(" ");
		}
			return 0;
	}

	
 
