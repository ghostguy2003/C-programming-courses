/*In this example, there are 5 boxcars with different weights summing to 110.0. 
The output shows that we are modifying all the boxcars so that they each carry a weight of 22.0 (which makes a total of 110.0 for the entire train). 
So we remove 18.0 for the first boxcar, we add 10.0 for the second, we add 2.0 for the third*/


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
