///*=============primeFunctions.h================*/
/*
 DESCRIPTION:   
 AUTHOR:        Andrew P. Sansom
 VERSION:       1.0.0
 VERSION DATE:  9/30/19
 EMAIL:         andrewsansom@my.unt.edu
 COURSE:        CSCE 1040
 =============primeFunctions.h================*/

#ifndef primeFunctions_h
#define primeFunctions_h

#include <cmath>

bool isPrime(int num){
    for (int i = 2; i <= sqrt(num);i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}

#endif /* primeFunctions_h */
