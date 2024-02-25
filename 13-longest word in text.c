/*Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words. 
To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text.
The output of your program should be the length of the longest word in the text.*/


#include <stdio.h>

int main (void){
    int input,i,l,j;
    scanf("%d",&input);
    int size;
    int max=0;
    size=input+1;
    char word[size];
    
    for (i=0;i<input;i++){
        scanf("%s",word);
        l=0;
          while(word[l]!='\0'){
             l++;
           }
           for (j=0;j<input;j++){
               if(l>max){
                   max=l;
               }
           }
         }
         
         
printf("%d",max);
return 0;
    
