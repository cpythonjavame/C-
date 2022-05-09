#include <stdio.h>
#include <math.h>
int main(){
	int n,w,h,i,r;
	double w1;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d %d",&h,&w);
		w1=(h-100)*0.9*2;
		if(fabs(w-w1)<0.1*w1)
		a[i]=0;
		else if(w1>w&&fabs(w-w1)>=0.1*w1)
		a[i]=1;
		else if(w1<w&&fabs(w-w1)>=0.1*w1)
		a[i]=2;
	}
	for(i=0;i<n;i++){
		if(a[i]==0)
		printf("You are wan mei!\n");
		else if(a[i]==1)
		printf("You are tai shou le!\n");
		else if(a[i]==2)
		printf("You are tai pang le!\n");
	}
	return 0;
}
