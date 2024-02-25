/*Your program must first read an integer indicating the number that the child will have to find during the game.
Next the program should repeatedly read the player's guesses and display the text "it is more" if the child has submitted a smaller number or "it is less" if they have submitted a larger number.
Once the correct number is reached, the program should print "Number of tries needed:" followed by a new line and the integer number of tries that it took the guesser.*/


#include <stdio.h>

int main (void){
    int input1,input2;
    scanf("%d",&input1);
    int tries =1;
    scanf("%d",&input2);
    
    while (input1!=input2){
       tries++;
        if (input2>input1){
            printf ("it is less\n");
        }else{
            printf ("it is more\n");
        }
        scanf ("%d",&input2);
    }
   
    printf ("number of tries needed:\n%d",tries);
    return 0;
}
