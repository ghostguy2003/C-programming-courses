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
