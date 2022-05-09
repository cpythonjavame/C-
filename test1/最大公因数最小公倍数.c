#include <stdio.h>
int main(){
	int i,m,n,t;
	scanf("%d %d",&m,&n);
    if(m<n){
        t=m;
        m=n;
        n=t;
    }
    int k=m*n;
    i=m%n;
    if(i==0)
	printf("%d %d",n,k/n);
    else {
        while(i!=0){
        m=n;
        n=i;
        i=m%n;
        }
         printf("%d %d",n,k/n);
         }
	return 0;
} 
