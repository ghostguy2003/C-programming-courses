/*To simplify the program, you may assume that student names are less than 50 characters long and contain no spaces. 
Your program should output an integer value (1 or 2) depending on whether the fan should join line 1 (name has even number of letters) or line 2 (name has odd number of letters).*/


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
