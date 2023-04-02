#include <stdio.h>
int main (void){
    int box,size;
    scanf  ("%d\n%d",&box,&size);
    printf ("%d\n%d",box/size,box%size);
    return 0;
}
