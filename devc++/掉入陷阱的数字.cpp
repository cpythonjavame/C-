#include <stdio.h>
int fun(int n);
int count=0,i;
int main(){
	int n,count1=0,m;
	scanf("%d",&n);
    m=3*fun(n)+1;
    while(m!=n){
    	n=m;
    	m=3*fun(m)+1;
    	count1++;
    	printf("%d:%d\n",count1,n);
	}
	printf("%d:%d\n",count1+1,n);
	return 0;
}
int fun(int n){
	int x=n,t,sum=0;
	while (x>0){
		x/=10;
		count++;
	}
		for(i=0;i<count;i++){
		t=n%10;
		n/=10;
		sum+=t;
	}
	return sum;
}
