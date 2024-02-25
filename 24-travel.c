/*If you have 0 passengers the carpool site does not charge anything and you alone pay the full cost of the trip.
If you have 1 or more passengers the carpool site adds a $1 fee to the cost of the trip and evenly divides the total cost ($1 fee + gas) among the passengers and you.
You want to write a program that calculates the cost you have to pay. 
The program should read the number of passengers (an integer) and the cost of gas for the trip (a decimal number).
The program should then print the cost that you have to pay (a decimal number) with 2 digits after the decimal point.*/


#include <stdio.h>

int main (void){
    int result;
    int user=1;
    int tusers;
    int user2;
    double price;
    double final;
    scanf("%d  %lf",&user2,&price);
    tusers=user+user2;
    result = (user2 == 0);
    if (result) {
      final = price;
      printf ("%.2lf",final);
    }else{
        final = (price+1)/tusers;
        printf ("%.2lf",final);
    }
    return 0;
}
