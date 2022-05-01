#include <stdio.h>
int main(){
	int n;
	for(n=10;;n++){
	if(n%5==1&&n%6==5&&n%7==4&&n%11==10)
		break;
	}
	printf("%d",n);
	return 0;
	
}
