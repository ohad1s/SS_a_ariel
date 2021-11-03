#include <stdio.h>
#include "NumClass.h"

//------------------------------------------------
// Created by Ohad Shirazi on 29/10/2021.
// Main Program
//------------------------------------------------

int main(){
    int first, second;
    printf("enter your 2 numbers to check\n");
    scanf( "%d%d", &first, &second);


    printf("The Armstrong numbers are:");
    for (int i = first; i <=second ; ++i) {
        if (isArmstrong(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Palindrome numbers are:");
    for (int i = first; i <=second ; ++i) {
        if (isPalindrome(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (int i = first; i <=second ; ++i) {
        if (isPrime(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for (int i = first; i <=second ; ++i) {
        if (isStrong(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    return (0);
}

