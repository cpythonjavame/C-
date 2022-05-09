#include <stdio.h>
int main(){
	int x,y,n=0;
	for(x=0;x<=45;x++){
		for(y=0;y<=45;y++){
			if((3*x+2*y+0.5*(45-x-y)==45)) {
			printf("男人=%d，女人=%d，小孩=%d\n",x,y,45-x-y); 
			n++;
			} 
		}
	}
	printf("有%d种方案",n);
	return 0;
}
