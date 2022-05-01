#include <stdio.h>
int main()
{
	double l,k;
	int m; 
    scanf("%lf%d",&l,&m);
    
    if(m<5){
    	if(l<=3)
    	k=10;	
		
		else if (l>3&&l<=10)
			k=10+2*(l-3);
		
		else 
			k=24+3*(l-10);
		 
}
	else {
		if(l<=3)
    	k=10+2*(m/5);	
		
		else if (l>3&&l<=10)
			k=10+2*(l-3)+2*(m/5);
		
		else
			k=24+3*(l-10)+2*(m/5);
		 
	}	 
    printf("%1.lf\n",k);	
    return 0;
}
