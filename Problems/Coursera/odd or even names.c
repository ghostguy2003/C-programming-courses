#include <stdio.h>

int main (void){
    char word[50];
    int i=0;
    scanf("%s",word);
    while(word[i]!='\0'){
     i++;
    }
    if(i % 2){
        printf ("2");
    }else{
        printf("1");
    }
    return 0;
}
