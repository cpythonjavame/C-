#include <stdio.h>
int main(){
	int n,i,j,count=0,sum=0;
	double average;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&j);
		sum+=j;
		if(j>=60){
			count++;
		}
	}
	average=sum*1.0/n;
	printf("ƽ���ɼ�=%.2f,��������=%d\n",average,count);
	return 0;
}
