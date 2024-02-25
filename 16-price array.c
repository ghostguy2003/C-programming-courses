/*You plan to make a delicious meal and want to take the money you need to buy the ingredients. 
Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need.
The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound.
Finally your program should read the weight necessary for the recipe (for each ingredient in the same order).
Your program should calculate the total cost of these purchases, then display it with 6 decimal places.*/


#include <stdio.h>

int main (void){
    double price[10];
    int i,j;
    int user;
    double amount[10];
    double total=0.0;
    double piece;
    
    scanf("%d",&user);
    
    for (i=0;i<user;i++){
        scanf ("%lf",&price[i]);
    }
    
      for(j=0;j<user;j++){
        scanf ("%lf",&amount[j]);
        piece=amount[j]*price[j];
        total=total+piece;
     }
    
    
printf ("%lf",total);
return 0;
}
