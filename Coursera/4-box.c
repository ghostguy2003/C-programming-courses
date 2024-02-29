//You input box and size and it outputs how many boxes you need and how many objects are left


#include <stdio.h>
int main (void){
    int box,size;
    scanf  ("%d\n%d",&box,&size);
    printf ("%d\n%d",box/size,box%size);
    return 0;
}
