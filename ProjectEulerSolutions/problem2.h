//
//  problem2.cpp
//  ProjectEulerSolutions
//
//  Created by Andrew Sansom on 2/11/19.
//  Copyright © 2019 Andrew Sansom. All rights reserved.
//

#include "fibonacciFunctions.h"


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
