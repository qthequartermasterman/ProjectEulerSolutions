///*=============fibonacciFunctions.h================*/
/*
 DESCRIPTION:   
 AUTHOR:        Andrew P. Sansom
 VERSION:       1.0.0
 VERSION DATE:  9/30/19
 EMAIL:         andrewsansom@my.unt.edu
 =============fibonacciFunctions.h================*/

#ifndef fibonacciFunctions_h
#define fibonacciFunctions_h
#include <cmath>

int getNextFibonacciNumber(int number){
    // We can calculate the next Fibonacci number in the sequence by multiplying the previous term by the golden ratio and rounding to the nearest integer.
    const float phi = (1+sqrt(5))/2;
    return (int) floor(number * phi+0.5);
}

#endif /* fibonacciFunctions_h */
