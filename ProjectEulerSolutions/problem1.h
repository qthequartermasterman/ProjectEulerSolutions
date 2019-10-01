//
//  problem1.h
//  ProjectEulerSolutions
//
//  Created by Andrew Sansom on 2/11/19.
//  Copyright © 2019 Andrew Sansom. All rights reserved.
//

/* The problem asks for the sum of all numbers less than 1000 that are multiples of 3 or 5. */
int problem1(){
    int runningSum = 0;
    for (int i = 0; i < 1000;i+=3){
        runningSum+=i;
    }
    for (int i = 0; i < 1000; i+=5){
        if (i%15 != 0){
            runningSum+=i;
        }
    }
    return runningSum;
}

