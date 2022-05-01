#include <stdio.h>
int main(){
	int i,n;
	double sum=0;
	scanf("%d",&n);
	double a[n],b[n];
	a[0]=2.0,a[1]=3.0;
	b[0]=1.0,b[1]=2.0;
	for(i=2;i<n;i++)
	a[i]=a[i-1]+a[i-2];
	for(i=2;i<n;i++)
	b[i]=b[i-1]+b[i-2];
	for(i=0;i<n;i++)
	sum+=a[i]*1.0/b[i];
	printf("%.2f",sum);
	return 0;
}
