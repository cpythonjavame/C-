#include <stdio.h>
double fact (int n);
int main(){
	int i,n,m;
	double result;
	scanf("%d %d",&m,&n);
	for(i=0;i<=n;i++){
		result=fact (n)/(fact (m)*fact (n-m));
	}
	printf("%d!/(%d!*(%d)!)=%f\n",n,m,n-m,result);
	return 0;
}
double fact (int n){
	int i;
	double product=1;
	for(i=1;i<=n;i++){
		product*=i;
	}
	return product;
}
