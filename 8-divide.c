#include <stdio.h>

int main (void){
    double n1,n2,div;
    int div2;
    scanf ("%lf\n%lf",&n1,&n2);
    div=n1/n2;
    div2=(int)div;
    printf("%d",div2);
    return 0;
}
