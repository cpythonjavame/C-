#include <stdio.h>
int main(){
	int x,y,n=0;
	for(x=0;x<=45;x++){
		for(y=0;y<=45;y++){
			if((3*x+2*y+0.5*(45-x-y)==45)) {
			printf("����=%d��Ů��=%d��С��=%d\n",x,y,45-x-y); 
			n++;
			} 
		}
	}
	printf("��%d�ַ���",n);
	return 0;
}
