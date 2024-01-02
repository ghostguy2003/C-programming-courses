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
