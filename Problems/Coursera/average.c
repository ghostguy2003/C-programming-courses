#include <stdio.h>

int main (void){
    int nogrades,sum,grades,i;
    double average;
    double d;
    sum=0;
    scanf("%d",&nogrades);
    for (i=1;i<=nogrades;i++){
        scanf("%d",&grades);
        sum=sum+grades;
    }
    d=(double)sum;
    average=d/nogrades;
    printf ("%.2lf",average);
    return 0;
}
