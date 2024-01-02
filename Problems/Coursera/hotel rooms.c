#include <stdio.h>

int main (void){
    int age,luggage;
    scanf ("%d\n%d",&age,&luggage); 
    int nocost=(age==60);
    int childcost=(age<=10);
    int normalcost= !nocost && !childcost;
    int price,extraluge;
    extraluge=(luggage>20);
    
    
   if (nocost){
       price=0;
       printf ("%d",price);
   }else if (childcost){
       price=5;
       printf ("%d",price);
   }else if (normalcost && extraluge){
       price=40;
       printf ("%d",price);
   }else if (normalcost){
       price=30;
       printf ("%d",price);
   }
     

    return 0;
    
}
