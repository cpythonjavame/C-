#include <stdio.h>
int main(){
	int n,m,i,j,count=1,s=0;
	scanf("%d %d",&n,&m);
	for(i=2;count<=m;i++){
		int f=1;
		for(j=2;j<i;j++){
			if(i%j==0)
				f=0;
		}
		if(f==1){
			if(count>=n)
				s+=i;
				count++;
	
		}
		
	}
	printf("%d",s);
	return 0;
}
