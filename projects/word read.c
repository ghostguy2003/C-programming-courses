#include <stdio.h>

int main (void){
    char word[101];
    int repeat,i;
    scanf ("%d %s",&repeat,word);
    for (i=0;i<repeat;i++){
        printf ("%s\n",word);
    }
    return 0;
}
