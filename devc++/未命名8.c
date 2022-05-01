#include <stdio.h>
int main(){
	int y,m,d;
	int c,f=0;
	scanf("%d/%d/%d",&y,&m,&d);
		switch(m){
			case 1:c=0;break;
			case 2:c=31;break;
			case 3:c=59;break;
			case 4:c=90;break;
			case 5:c=120;break;
			case 6:c=151;break;
			case 7:c=181;break;
			case 8:c=212;break;
			case 9:c=243;break;
			case 10:c=273;break;
			case 11:c=304;break;
			case 12:c=334;break;
		}
		c+=d;
	if((y%4==0&&y%100!=0)||(y%400==0))
	f=1;
	if(f==1&&m>2)
	c++;	
        printf("%d\n",c);
	    return 0;
}
