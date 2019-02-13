//
//  problem2.h
//  ProjectEulerSolutions
//
//  Created by Andrew Sansom on 2/11/19.
//  Copyright © 2019 Andrew Sansom. All rights reserved.
//

#ifndef problem2_h
#define problem2_h

#include <cmath>

int getNextFibonacciNumber(int number){
    // We can calculate the next Fibonacci number in the sequence by multiplying the previous term by the golden ratio and rounding to the nearest integer.
    const float phi = (1+sqrt(5))/2;
    return (int) floor(number * phi+0.5);
}

/* Problem asks for the sum of all even fibonacci numbers less than 4 million*/
int problem2(){
    int runningSum = 2;
    int number = 2;
    while (number < 4000000){
        number = getNextFibonacciNumber(number);
        if (number%2==0){
            runningSum+=number;
        }
    }
    return runningSum;
}


#endif /* problem2_h */
