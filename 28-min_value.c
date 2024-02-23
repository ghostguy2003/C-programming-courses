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
