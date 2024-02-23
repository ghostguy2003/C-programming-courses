#include <stdio.h>

int main (void){
    int num,i;
    int total=0;
    
    scanf ("%d",&num);
    int city[num];
    
    for (i=0;i<num;i++){
        scanf("%d\n",&city[i]);
        if(city[i]>10000){
            total=total+1;
        }
    }
    printf ("%d",total);
    return 0;
}
