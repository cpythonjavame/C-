#include <stdio.h>
#include <math.h>
int main(){
	int n,m,i;
	for(m=20000;m<=100000;m++){
		n=sqrt(m);
		for(i=2;i<=n;i++)
			if(m%i==0)
			break;
			if(i>n)
			printf("%d ",m);
	}
	return 0;
}
