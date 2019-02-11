//
//  problem2.h
//  ProjectEulerSolutions
//
//  Created by Andrew Sansom on 2/11/19.
//  Copyright © 2019 Andrew Sansom. All rights reserved.
//

#ifndef problem2_h
#define problem2_h


int getNextFibonacciNumber(int number1, int number2){
    return number1 + number2;
}


/* Problem asks for the sum of all even fibonacci numbers less than 4 million*/
int problem2(){
    int runningSum = 2;
    int number1 = 1;
    int number2 = 2;
    
    while (number2 < 4000000){
        int nextNumber = getNextFibonacciNumber(number1, number2);
        number1=number2;
        number2=nextNumber;
        
        if (nextNumber%2 == 0){
            runningSum+=nextNumber;
        }
    }
    return runningSum;
}


#endif /* problem2_h */
