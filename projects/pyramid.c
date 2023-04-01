#include <stdio.h>
int main (void){
    char sign;
    int i,j;
    printf ("input desired sign:");
    scanf("%c",&sign);
    for (i=1;i<=5;i++){
        for (j=1;j<=9;j++){
            if (j>=5-(i-1) && j<=5+(i-1)) {
                
                printf ("%c",sign);
            }
            else{
                printf ("+");
            }
        }
                    printf("\n");
    }
    return 0;
}
