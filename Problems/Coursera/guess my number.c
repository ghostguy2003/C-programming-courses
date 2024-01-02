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
