#include <stdio.h>
int main(){
	int n,N,k,i,j=1;
	scanf("%d %d\n",&n,&N);
	for(i=1;i<=N;i++){
		scanf("%d",&k);
        if(k<0)
            break;
            if(k<n)
		printf("Too small\n");
            else if(k>n)
                printf("Too big\n");
           else if(k==n){
           	if(i==1)
                printf("Bingo!\n");
            else if(i<=3)
                printf("Lucky You!\n");
                else if(i>3)
                printf("Good Guess!\n");
                j=0;
                break; 
           } 

}
                if(j==1)
				printf("Game Over\n");
				return 0;
	}
