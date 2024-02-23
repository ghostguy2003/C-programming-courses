#include <stdio.h>

int main (void){
    int size,i,j;
    scanf("%d",&size);
    double array[size];
    double rv=0.0;
    int cell=0;
    int inc=0;
    
    for (i=0;i<size;i++){
        scanf("%lf",&rv);
        array [cell]=rv;
        cell=cell+1;
    }
    
    for (j=0;j<size;j++){
        printf ("%.2lf\n",22-array[inc]);
        inc=inc+1;
    }

    
    return 0;
}
