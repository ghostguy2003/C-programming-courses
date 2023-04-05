#include <stdio.h>

int main (void){
    int time;
    int total;
    scanf ("%d",&time);
    total=10+(5*time);
    if (total <=53){
        printf("%d",total);
    }else{
        printf ("%d",53);
    }
    return 0;
}
