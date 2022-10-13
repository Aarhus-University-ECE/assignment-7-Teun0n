extern "C"{
#include "taylor_sine.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
}




// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    printf("\n\n%f\n\n",taylor_sine(3.145/2,10));
    return 0;
}