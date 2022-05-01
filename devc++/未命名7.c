#include <stdio.h>
int main(){
	int i,n,p;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		p=pow (2,i);
		printf("pow (2,%d) = %d\n",i,p);
	}
	return 0;
}
