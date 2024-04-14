/*You want to determine the number of cities in a given region that have a population strictly greater than 10,000. 
To do this, you write a program that first reads the number of cities in a region as an integer, and then the populations for each city one by one (also integers).*/

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
