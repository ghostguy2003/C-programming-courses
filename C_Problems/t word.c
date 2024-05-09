/*You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). 
Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1.
If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2.
Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. 
You may assume that the word entered does not have more than 50 letters.*/





#include <stdio.h>

int main (void){
    char word[50];
    int i=0;
    int j=0;
    int value=0;
    int part1;
    int part2;
    char tar1='t';
    char tar2='T';

    scanf("%s",word);
    while(word[i]!='\0'){
        i++;
    }
 
 if (i % 2){
     value=(i*0.5)+1;
     part1=value;
     part2=value+part1-1;
 }else{
     value=0.5*i;
     part1=value;
     part2=value+part1;
 }
 
 while((word[j]!=tar1) && (word[j]!=tar2) && (j<i)){
     j++;
 }
  if(j<i && j <= part1){
     printf("1");
 }else if((j > part1) && (j<=part2) && (j<i)){
     printf("2");
 }else{
     printf("-1");
 }
 return 0; 
  }
