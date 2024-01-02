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
    
