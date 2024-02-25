/*Write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of the digits of a number. 
To do so, your main function should first read an integer number as input and then call sumOfDigits(), which should in turn call itself until there are no digits left to sum, at which point the final sum should display to the user.*/



int sumOfDigits(int);

#include <stdio.h>

int main (void){
    int input;
    scanf("%d",&input);
    int sum=sumOfDigits(input);
    printf("%d",sum);
    return 0;
}


int sumOfDigits(int n){
    if (n<10){
        return n;
    }else{
        return n%10 + sumOfDigits(n/10);
    }
}
