#include <stdio.h>
int main(){
	int i,m=1,n=1,t;
	printf("%6d%6d",m,n); 
	for(i=1;i<=8;i++){
		t=m+n;
		m=n;
		n=t;
		printf("%6d ",t);
	}
	return 0;
} 
