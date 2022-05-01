#include <stdio.h>
int main(){
    double y,x;
    scanf("%lf",&x);
    if(x<=15){
        y=4*x/3;
    }
    else{
        y=2.5*x-10.5;
    }
    printf("%.2d",y);
    return 0;
}
