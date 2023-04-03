#include <stdio.h>

int main (void){
    int pop,d,final;
    double per,percentage;
    pop=0;
    per=0.0;
    scanf("%d\n%lf",&pop,&per);
    percentage=(per/100)*pop;
    d=(int)percentage;
    final=d+pop;
    printf("%d",final);
    return 0;
    
}
