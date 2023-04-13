#include <stdio.h>

int main (void){
    int array [10];
    int i,rv,user;
    int cn=0;
    for (i=0;i<10;i++){
        scanf ("%d ",&rv);
        array[cn]=rv;
        cn=cn+1;
    }
    scanf("\n%d",&user);
    printf("\n%d",array[user]);
    return 0;
}
