///*=============problem4.cpp================*/
/*
 DESCRIPTION:   
 AUTHOR:        Andrew P. Sansom
 VERSION:       1.0.0
 VERSION DATE:  9/30/19
 EMAIL:         andrewsansom@my.unt.edu
 =============problem4.cpp================*/

#include <iostream>
#include <string>

/*
Problem 4

 A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

 Find the largest palindrome made from the product of two 3-digit numbers.
 */

const int start = 999*999; //Start with the largest possible product of two three digit numbers

//isPalindrome(int num) simply returns true if the input integer is a palindrome.
bool isPalindrome(int num){
    std::string str = std::to_string(num);
    for (int i=0; i<str.length(); i++){
        if (str[i] != str[str.length()-i-1]){
            //std::cout << num << " is not a palindrome.\n";
            return false;
        }
    }
    return true;
}


//Check from the largest numbers, and work down. If a larger product than the current is found that it is still a palindrome, then replace the current with the new one. Return the one that remains
int problem4(){
    int current = 1;
    for (int i = 999; i >=100; i--){
        for (int j = 999; j >=i; j--){
            int product = i*j;
            if (product < current){ //No need to keep calculating if we're smaller than the current highest palindrome.
                break;
            }
            std::cout << "Checking: " << i<< "*" << j << "=" << product << std::endl;
            if (product > current && isPalindrome(product)){
                current=product;
            }
        }
    }
    return current;
}


