#include <stdio.h>
int main (void){
    double cel,fahr;
    scanf ("%lf",&cel);
    fahr=cel*9.0/5.0+32.0;
    printf("%.1lf",fahr);
    return 0;
}
