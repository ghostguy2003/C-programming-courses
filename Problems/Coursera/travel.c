#include <stdio.h>

int main (void){
    int result;
    int user=1;
    int tusers;
    int user2;
    double price;
    double final;
    scanf("%d  %lf",&user2,&price);
    tusers=user+user2;
    result = (user2 == 0);
    if (result) {
      final = price;
      printf ("%.2lf",final);
    }else{
        final = (price+1)/tusers;
        printf ("%.2lf",final);
    }
    return 0;
}
