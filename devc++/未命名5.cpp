#include <stdio.h>
int main()
{
	int i; 
    scanf("%d",&i);
    if(i>=90){
    	printf("A");
	}
    else if(i>=80&&i<90){
    	printf("B");
	}
	else if(i>=70&&i<80){
    	printf("C");
	}
	else if(i>=60&&i<70){
    	printf("D");
	}
	else {
    	printf("E");
	}
    return 0;
}
