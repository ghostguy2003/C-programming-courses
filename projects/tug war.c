#include <stdio.h>

int main (void){
    int players;
    int i,condition;
    int weight,weight2;
    int sumteam1 = 0;
    int sumteam2 = 0;
    scanf("%d", &players);
    int noplayers=(2*players)-1;
    
    for(i=0;i<=noplayers;i++){
        if (i%2==0){
            scanf("%d",&weight);
            sumteam1=sumteam1+weight;
        }else{
            scanf("%d",&weight2);
            sumteam2=sumteam2+weight2;
        }
    }
   
    condition = (sumteam1 > sumteam2);
    
    if (condition){
        printf("Team 1 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d", sumteam1, sumteam2);
    }
    else{
        printf("Team 2 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d", sumteam1, sumteam2);
    }
    
    return 0;
}
