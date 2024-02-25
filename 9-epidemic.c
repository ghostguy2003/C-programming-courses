/*For a total population of 100 inhabitants, on day 1 a single person is infected. 
This is followed by 2 new people on the second day for a total of 3 infected people. On the third day,  6 new people are infected for a total of 9 infected people.
On the fourth day, 18 new people are infected, for a total of 27 people. On the fifth day, 27 new people infect 54 people for a total of 81 people infected.
On the sixth day, the last of the 100 people will be infected (though the 81 people have the potential to contaminate 162 people) so your program should output '6'.*/


#include <stdio.h>

int main (void){
    int pop;
    scanf("%d",&pop);
    int totalcont=1;
    int todaycont=1;
    int days=1;
    while(totalcont<pop){
        todaycont=2*totalcont;
        totalcont=totalcont+todaycont;
        days++;
    }
    printf("%d",days);
    return 0;
}
