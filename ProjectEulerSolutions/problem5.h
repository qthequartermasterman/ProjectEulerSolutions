///*=============problem5.h================*/
/*
 DESCRIPTION:   
 AUTHOR:        Andrew P. Sansom
 VERSION:       1.0.0
 VERSION DATE:  10/1/19
 EMAIL:         andrewsansom@my.unt.edu
 =============problem5.h================*/

#ifndef problem5_h
#define problem5_h


int problem5(){
    //This one is most easily hard coded. There is a beautiful way to do this strictly using number theory. Simply start with the smallest number divisible by 10, and increase the powers of prime numbers in its factorization so that it becomes divisible by each new number less than or equal to twenty.
    return 16*9*5*7*11*13*17*19;
}


#endif /* problem5_h */
