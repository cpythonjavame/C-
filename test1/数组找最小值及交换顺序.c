#include <stdio.h>
int main(){
	int a[10];
	int n,i,j,min=0,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=1;j<n;j++){
		if(a[min]>a[j])
		min=j;
	}
	printf("最小值是%d,下标是%d\n",a[min],min);
	m=a[0];
	a[0]=a[min];
	a[min]=m;
	for(i=0;i<n;i++)
	printf("%6d",a[i]);
	return 0;
}

