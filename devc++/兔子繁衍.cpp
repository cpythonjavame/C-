#include <stdio.h>
int main(){
	int n=2,t,N,a1=1,a2=1,sum=1;
	scanf("%d",&N);
	if(N==1)
	printf("1\n");
	else{
		while(sum<N)
		{
			sum=a1+a2;
			t=a1;
			a1=a2;
			a2+=t; 
			n++;
		} 
	printf("%d",n);
	}
	return 0;
}
