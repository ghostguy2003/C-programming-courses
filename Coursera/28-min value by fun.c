/*The goal of this problem is to find the smallest integer in a list of numbers.
To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). 
The function thus takes two integers as input and returns the smallest of the two. 
This function will use an if statement with a condition that contains either "less than" or "greater than".*/

#include <stdio.h>

int min(int[],int);

    int main (void){
    int no;
    scanf("%d",&no);
    int arr[no];
    
    
    for (int i=0;i<no;i++){
        scanf("%d",&arr[i]);
    }
    
    
    min(arr,no);
    return 0;
}

int min(int ex[], int input) {
    int least = ex[0];
    for (int j = 1; j < input; j++) {
        if (ex[j] < least) {
            least = ex[j];
        }
    }
    printf("%d", least);
    return least;
}
