#include <stdio.h>
#include "myMath.h"
int main()
{
	double x;
	int number_for_e;
  	printf("please insert a double number: ");
    	scanf("%lf", &x);  
    	if(x>=0){//x is positive
    		number_for_e=(int)x;
    		}
    	else{	
		int x_floor=(int)(-1)*x;
		x_floor*=-1;
		if(x_floor==x){//check if x is round number 
			number_for_e=x_floor;
			}
		else{
			 number_for_e=x_floor-1;//floor for unround negative number
    		}
    		}
    	double f1,f2,f3;
    	f1=add(Exponent(number_for_e) , sub( Power(x , 3) , 2));
    	f2=add( mul(x , 3) , mul(Power(x , 2) , 2));
    	f3=sub(div(mul(Power(x,3),4),5), mul(x,2));
    	printf("f(x) = e^x+x^3-2 at the point %.4lf is: %.4lf\n",x, f1);
    	printf("f(x) = 3*x + 2x^2 at the point %.4lf is %.4lf\n:",x, f2);
    	printf("f(x) = (4*x^3)/5 -2*x at the point %.4lf is %.4lf\n:",x,f3);
return 0;
}
