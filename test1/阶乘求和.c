#include <stdio.h>
int fun(int n);
int j(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
	return 0;
}
int fun(int n){
	int u;
	if(n==1)
	u=1;
	else{
	u=fun(n-1)+j(n);
}
	return u;
}
int j(int n){
	int i,s=1;
	for(i=n;i>1;i--)
	s*=i;
	return s;
}
