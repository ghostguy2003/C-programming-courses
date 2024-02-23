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
