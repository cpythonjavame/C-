#include <stdio.h>
#include <math.h>
int su(int n);
int main(){
	int m,n,i,count=0,sum=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		if(su(i)==1){
			sum+=i;
			count++;
		}
	} 
	printf("%d %d",count,sum);
	return 0;
}
int su(int n){
	int i,k=0;
	if(n==2||n==3)
	k=1;
	for(i=2;i<=sqrt(n);i++){
	if(n%i==0)
	break;}
	if(i>sqrt(n)&&n!=0&&n!=1)
	k=1;
	return k;

}		

