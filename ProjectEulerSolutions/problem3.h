//
//  problem3.cpp
//  ProjectEulerSolutions
//
//  Created by Andrew Sansom on 2/12/19.
//  Copyright © 2019 Andrew Sansom. All rights reserved.
//

#include "primeFunctions.h"

/* The problem asks us to find the largest prime factor of the number 600851475143*/
/* We need to iterate over integers n, checking if 600851475143%n == 0. */
/* If we start at sqrt600851475143 and work down, checking if each one is prime and a factor, we will find the largest prime factor. */
long const NUMBER = 600851475143;

int problem3(){
    int const rootOfNumber = floor(sqrt(NUMBER));
    for (int i=rootOfNumber; i > 2; i--){
        if (isPrime(i) && NUMBER%i==0){ //Check if it's a factor and prime
            return i;
        }
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    std::cout << problem3() << std::endl;
    return 0;
}
