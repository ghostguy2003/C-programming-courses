/*Your program will have to read a sequence of positive integers and display their sum.
We do not know how many integers there will be, but the sequence always ends with the value -1 (which is not an expense, just an end marker).*/

   
#include <stdio.h>

int main (void){
    int input;
    int sum=1;
    scanf("%d",&input);
    sum=sum+input;
    while(input>=0){
        scanf("%d",&input);
        sum=sum+input;
    }
    printf("%d",sum);
}
