#include <stdio.h>
double f(double a3,double a2,double a1,double a0,double x);
	double f(double a3,double a2,double a1,double a0,double x){
		return a3*x*x*x+a2*x*x+a1*x+a0;
	}
	int main(){
		double f(double a3,double a2,double a1,double a0,double x);
		double a,b,mid;
		double a3,a2,a1,a0;
		scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
		scanf("%lf %lf",&a,&b);
		while(a<b){
			if(b-a<0.0001){
				printf("%.2f",(a+b)/2);
				break;
			}
			if(f(a3,a2,a1,a0,a)*f(a3,a2,a1,a0,b)<0)
				mid=(a+b)/2;
			if(f(a3,a2,a1,a0,(a+b)/2)==0){
			printf("%.2f",mid);
			break;	
			}
				if(f(a3,a2,a1,a0,a)*f(a3,a2,a1,a0,mid)>0)	
				a=(a+b)/2;
			if(f(a3,a2,a1,a0,b)*f(a3,a2,a1,a0,mid)>0)	
		b=(a+b)/2;
		}
		return 0;
	}
	
