#include <stdio.h>
int main(){
	int i,n;
	double p;
	for(i=1;i<=5;i++){
		printf("[1]apples\n");
		printf("[2]pears\n");
		printf("[3]oranges\n");
		printf("[4]grapes\n");
		printf("[0]Exit\n");
		scanf("%d",&n);
		if(n==0)
		break;
		switch(n){
			case 1:p=3.0;break;
			case 2:p=2.5;break;
		    case 3:p=4.0;break;
		    case 4:p=10.2;break;
		    default:p=0;break;
		}
		printf("%.1fÔª/Ç§¿Ë\n",p);
		}	
	return 0;
}
