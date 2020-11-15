#include <stdio.h>
#include "myMath.h"

double Power(double x , int y){
int i;
int abs_y=y*(-1);//abs of y
int flag=0;
double square=x;
if(y==0)
{
	return 1;
}
if(y<0){//check if the square is negative if yes than flag=1
	flag=1;
}
if(flag==1)
{
	y=abs_y;//y now is the abs of the old y
}
for(i=1;i<y;i++){
	x=x*square;
	}
if(flag==1){//the square was negative so 1/x^y
	return 1/x;
}	
return x;
}
double Exponent(int x){
	return Power(MY_E , x);
}

