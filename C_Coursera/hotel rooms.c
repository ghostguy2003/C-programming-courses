/*One room costs nothing if you are exactly 60 (the age of the innkeeper), or 5 dollars if you are less than 10 years old. 
For everyone else, the cost is 30 dollars plus an additional 10 dollars if you bring more than 20 pounds of luggage. 
Your program should read the customer's age first, then the weight of their luggage, then output the price they have to pay.*/


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
