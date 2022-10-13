#include "taylor_sine.h"



double factorial(int n){//standard function for finding factorial of n.

    if(n<=1){
        return 1;
    }
    else
    return(n*factorial(n-1));
}

double taylor_sine(double x, int n)
{
    //pre: function takes input x in radians and input n in integer.
    //post: function outputs an approximation to n precision where for loop runs n times.

double sine=x;//final output of function
double xsquared=x*x;//x squared
double numerator=x;//starts as x because the for loop counts for x^3/3! as x^1/1!=x, which is set as sine star value.
double denomenator=1;//uses factorial(int n) to find the valule of current numerator.
int fcounter=1;//is equal to factorial in numerator.
    for(int i=1;i<=n;i++){
            fcounter+=2;//2 is added to factorial each time more precision is added.
            numerator=xsquared*numerator;//each time more precision is added the product of the previous numerator times x squared is the new numerator.
            denomenator=factorial(fcounter);//fcounter is insterted in factorial function
        if(i%2==0)
        /*because the result of numerator/denomenator is added and subtracted every other time.
         i % 2 is used where it swtiches between 1 and 0 every loop.*/
        {
            sine+=numerator/denomenator; //if i is an equal number the current numerator/denomenator is subtracted from sine.
        }
        else
        {
            sine-=numerator/denomenator;//if i isn't an equal number the current numerator/denomenator is added to sine.
        }
    }

    return sine;//approximation of sin(x) is returned.
}
