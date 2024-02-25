//Converts from kilometers to miles

#include <stdio.h>
int main (void){
    double miles,kilo;
    scanf("%lf",&kilo);
    miles=kilo*0.621371;
    printf("%lf",miles);
    return 0;
}
