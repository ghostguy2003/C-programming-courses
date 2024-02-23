
int main (void){
    int input,i;
    scanf ("%d",&input);
    char word1[15];
    char word2[15];
    
    
    for(i=0;i<input;i++){
        scanf("%s %s",word1,word2);
        printf("%s %s\n",word2,word1);
    }
    return 0;
}
