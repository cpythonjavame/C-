#include <stdio.h>

int main (void){
    int x,y = 1;
    int s = 0;
    int count = 0;
    scanf ("%d",&x);
    while(s < x)
    {
        s = s * 10 + 1;
        count++;
    }
    while (y != 0)
    {
        y = s % x;
        printf("%d",s / x);
        s = y * 10 + 1;
        count++;
    }
    printf(" %d",count-1);
    return 0;
}
