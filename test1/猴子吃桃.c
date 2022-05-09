#include <stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	a[0]=1; 
	for(i=0;i<n-1;i++){
		a[i+1]=2*(a[i]+1);
	}
	printf("%d",a[n-1]);
	return 0;
}
