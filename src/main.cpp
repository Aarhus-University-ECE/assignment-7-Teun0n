extern "C"{
#include "taylor_sine.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
}
// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv) 
{
    /*program prints output of taylor_sine function and sin function from math.h library.
    taylor_sine and sin takes x inputs pi/2 through 5*pi/2.
    this is done three times for n_inputs n=1,n=5,n=20 for taylor_sine function.*/
    double x_input=0;
    int n_input=1;
    for(int i=0;i<5;i++)
    {
   
    x_input+=M_PI_2;
    printf("\ntaylor_sine(%f,%d) = %f   sin(%f) = %f\n",x_input,n_input,taylor_sine(x_input,n_input),x_input,sin(x_input));
    }
    x_input=0;
    n_input=5;
    for(int j=0;j<5;j++)
    {
   
    x_input+=M_PI_2;
    printf("\ntaylor_sine(%f,%d) = %f   sin(%f) = %f\n",x_input,n_input,taylor_sine(x_input,n_input),x_input,sin(x_input));
    }
    x_input=0;
    n_input=20;
    for(int k=0;k<5;k++)
    {
    x_input+=M_PI_2;
    printf("\ntaylor_sine(%f,%d) = %f   sin(%f) = %f\n",x_input,n_input,taylor_sine(x_input,n_input),x_input,sin(x_input));
    }
    /* taylor_sine gets closer to math.h sin function, with higher n_input values.
    For n=1, only 1 value was close to math.h sin function
    For n=5, 3 values where close or equal to math.h sin function
    For n=20 all 5 values were equal to math.h sin function.*/
    return 0;
}