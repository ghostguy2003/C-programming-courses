#include <stdio.h>

int main (void){
    int dice1;
    int dice2;
    int sum;
    int condition;
    scanf("%d\n%d",&dice1,&dice2);
    sum=dice1+dice2;
    condition= (sum>=10);
    if (condition){
        printf ("Special tax\n36");
    }else{
        printf ("Regular tax\n%d",sum*2);
    }
    return 0;
}
