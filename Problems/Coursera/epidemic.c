#include <stdio.h>

int main (void){
    int pop;
    scanf("%d",&pop);
    int totalcont=1;
    int todaycont=1;
    int days=1;
    while(totalcont<pop){
        todaycont=2*totalcont;
        totalcont=totalcont+todaycont;
        days++;
    }
    printf("%d",days);
    return 0;
}
