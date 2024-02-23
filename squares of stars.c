#include <stdio.h>

int main (void){
    int i,j;
    int input;
    
    scanf("%d",&input);
    
    for (i=1;i<=input;i++){
        for (j=1;j<=input;j++){
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}
