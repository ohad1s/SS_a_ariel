#include <stdio.h>
#include <math.h>
#include "NumClass.h"

//------------------------------------------------
// Created by Ohad Shirazi on 29/10/2021.
// advancedClassificationRecursion implementation
//------------------------------------------------
int NumOfDigits(int n){
    int length=0;
    while(n!=0){
        length+=1;
        n=n/10;
    }
    return (length);
}

int myPow(int a, int b){
    int counter=1;
    int pow=a;
    while(counter!=b){
        pow=pow*a;
        counter=counter+1;
    }
    return (pow);
}

int rev(int n,int sum){
        sum += n - ((n / 10) * 10);
        n /= 10;
        if (n > 0)
            return rev(n, sum * 10);
        else
            return sum;
//    int t=n;
//    if (t==0){
//        return (1);
//    }
//    int reverse=0, rem;
//    while (t != 0) {
//        rem = t % 10;
//        reverse = reverse * 10 + rem;
//        t /= 10;
//    }
//
//    if (n%10==reverse%10){
//        int x= (n%(myPow(10,NumOfDigits(n)-1)));
//        int y= x/10;
//        return (isPalindrome(y));
//    }
//    else{
//        return (0);
//    }
}

int isPalindrome(int n){
    if(n== rev(n,0)){
        return (1);
    }
    else{
        return (0);
    }
}

int SumOfPow(int n,int d){
    if (n==0) {
        return 0;
    }
    else{
        return (myPow((n%10),d) + SumOfPow((n/10),d));

    }
}

int isArmstrong(int n){
    return (SumOfPow(n,NumOfDigits(n))==n);
}

