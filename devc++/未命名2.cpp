#include <stdio.h>
int main(){
	int n,i;
	int c=1;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		c=pow (n,i);
		printf("%d",c);
	}
	
	return 0;
}
