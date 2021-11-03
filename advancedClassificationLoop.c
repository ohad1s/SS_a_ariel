#include <stdio.h>
#include <math.h>
#include "NumClass.h"

//------------------------------------------------
// Created by Ohad Shirazi on 29/10/2021.
// advancedClassificationLoop implementation
//------------------------------------------------
int myPow(int a, int b){
    int counter=1;
    int pow=a;
    while(counter!=b){
        pow=pow*a;
        counter=counter+1;
    }
    return (pow);
}

int NumOfDigits(int n){
    int length=0;
    while(n!=0){
        length+=1;
        n=n/10;
    }
    return (length);
}

int isPalindrome(int n){
    int t=n;
    int reverse=0, rem;
    while (n != 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    if (t == reverse){
        return (1);
    }
    else{
        return (0);
    }
}

int isArmstrong(int n){
    int x= NumOfDigits(n);
    int number=n;
    int sumOfPow=0;
    while(n!=0){
        int digit=n%10;
        int digitP= myPow(digit, x);
        sumOfPow+=digitP;
        n=n/10;
    }
    if (sumOfPow==number){
        return (1);
    }
    else{
        return (0);
    }
}



