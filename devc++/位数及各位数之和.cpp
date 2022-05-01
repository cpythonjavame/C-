#include <stdio.h>
int main(){
	int n,i=0,sum=0;
	scanf("%d",&n);
	while(n!=0){
		sum=sum+(n%10);
		n/=10;
		i++;
	}
	printf("%d %d",i,sum);
	return 0;
}
