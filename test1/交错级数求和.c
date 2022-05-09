#include <stdio.h>
#include <math.h>
int main(){
	int n;
	double sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i*1.0/(2*i-1)*pow(-1,i-1);
	}
	printf("%.3f",sum);
	return 0;
}
