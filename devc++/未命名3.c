#include <stdio.h>
double fact (int n);
int main(){
	int i,n;
	double result;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		result=fact (i);
		printf("%d!=%f\n",n,result);
	}
	return 0;
}
double fact (int n){
	int i;
	double product=1;
	for(i=1;i<=n;i++){
		product=product*i;
	}
	return product;
}
