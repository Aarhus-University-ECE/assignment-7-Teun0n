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
    taylor_sine and sin takes x inputs pi/2 through 10*pi/5 (or 2pi) in steps of pi/5.
    this is done three times for n_inputs n=1,n=5,n=20 for taylor_sine function.*/
    double x_input=0;
    int n_input=1;
    printf("\nn_input = 1\n");
    for(int i=0;i<10;i++)
    {
   
    x_input+=M_PI/5;
    printf("\ntaylor_sine(%f,%d) = %f   sin(%f) = %f\n",x_input,n_input,taylor_sine(x_input,n_input),x_input,sin(x_input));
    }
    printf("\nn_input = 5\n");
    x_input=0;
    n_input=5;
    for(int j=0;j<10;j++)
    {
   
    x_input+=M_PI/5;
    printf("\ntaylor_sine(%f,%d) = %f   sin(%f) = %f\n",x_input,n_input,taylor_sine(x_input,n_input),x_input,sin(x_input));
    }
    printf("\nn_input = 20\n");
    x_input=0;
    n_input=20;
    for(int k=0;k<10;k++)
    {
    x_input+=M_PI/5;
    printf("\ntaylor_sine(%f,%d) = %f   sin(%f) = %f\n",x_input,n_input,taylor_sine(x_input,n_input),x_input,sin(x_input));
    }
    printf("\n\n");
    /* taylor_sine gets closer to math.h sin function, with higher n_input values.
    For n=1, 3 values were close to math.h sin function
    For n=5, 9 values were close or equal to math.h sin function
    For n=20 all values were equal to math.h sin function.*/
    return 0;
}