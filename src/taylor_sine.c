#include "taylor_sine.h"
#include <stdlib.h>
#include <math.h>


double factorial(int n){//standard function for finding factorial of n.

    if(n<=1){
        return 1;
    }
    else
    return(n*factorial(n-1));
}

double taylor_sine(double x, int n)
{
    /* implement your function here */
double sine=x;//final output of function
double xsquared=x*x;//x squared
double numerator=x;//starts as x because the for loop counts for x^3/3! as x^1/1!=x, which is set as sine star value.
double denomenator=1;//uses factorial(int n) to find the valule of current numerator.
int fcounter=1;//is equal to factorial in numerator.
    for(int i=1;i<=n;i++){
            fcounter+=2;//2 is added to factorial each time more precision is added.
            numerator=xsquared*numerator;//each time more precision is added the product of the previous numerator times x squared is the new numerator.
            denomenator=factorial(fcounter);//fcounter is insterted in factorial function
        if(i%2==0)//because the result of numerator/denomenator is added and subtracted every other time. i % 2 is used where it swtiches between 1 and 0 every loop.
        {
            sine+=numerator/denomenator;
        }
        else
        {
            sine-=numerator/denomenator;
        }
    }

    return sine;
}
