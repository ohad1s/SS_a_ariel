#include <stdio.h>
#include "NumClass.h"

//------------------------------------------------
// Created by Ohad Shirazi on 29/10/2021.
// basicClassification implementation
//------------------------------------------------

int isPrime(int n){
    if (n==1){
        return(1);
    }
    for (int i = 2; i < n; ++i) {
        if (n%i==0){
            return (0);
        }
    }
    return (1);
}

int factorial(int n){
    int fact=1;
    for (int i = 2; i <=n ; ++i) {
        fact=fact*i;
    }
    return (fact);
}

int isStrong(int n){
    int number=n;
    int sumOfFactorial=0;
    while(n!=0){
        int digit=n%10;
        int digitF= factorial(digit);
        sumOfFactorial+=digitF;
        n=n/10;
    }
    if (sumOfFactorial==number){
        return (1);
    }
    else{
        return (0);
    }
}


