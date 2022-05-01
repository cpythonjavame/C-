#include <stdio.h>
int main(){
	long int n;
	int count=0,i;
	scanf("%ld",&n);
	int x=n;
	do{
		x/=10;
		count++;
	}while(x>0);
	int a[count];
	for(i=0;i<count;i++){
		a[i]=n%10;
		n/=10;
	}
	for(i=count-1;i>-1;i--)
	printf("%d ",a[i]);
	return 0;
}
