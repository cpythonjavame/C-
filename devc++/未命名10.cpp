#include <stdio.h>
int main(){
	int i,m;
	scanf("%d",&m);
	for(i=2;i<=m/2;i++)
		if(m%i==0){
			printf("no");
			break;
		}
		printf("zhishu");  
	return 0;
}
