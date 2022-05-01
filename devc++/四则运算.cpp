#include <stdio.h>
int main(){
	int a=0,b,f=1;
	char op;
	scanf("%d%c",&a,&op);
	while(op!='='&&f==1){
		switch(op){
			case '+':scanf("%d",&b);a+=b;break;
			case '-':scanf("%d",&b);a-=b;break;
			case '*':scanf("%d",&b);a*=b;break;
			case '/':scanf("%d",&b);
			if(b==0){
				f=0;
				break;
			}a/=b;break;
			default:
				f=0;
				break;
		}
		scanf("%c",&op);
	}
	if(f==1){
		printf("%d",a);//Õ¸º”¡À 
	}
	else
	printf("ERROR\n");
	return 0;
}
