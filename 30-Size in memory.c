#include <stdio.h>

int main(void) {
    int input, n, i, j;
    int sum = 0;
    char type;
    int invalid = 0;
    scanf("%d", &input);
    int x[input];
    char typ[input];
    
    for (i = 0; i < input; i++) {
        scanf("%d %c", &n, &type);
        x[i] = n;
        typ[i] = type;
    }
        
    for (j = 0; j < input; j++) {    
        if (typ[j] == 'i') {
            x[j] = x[j]* sizeof(int);
        } else if (typ[j] == 'c') {
            x[j] = x[j]* sizeof(char);
        } else if (typ[j] == 'd') {
            x[j] =x[j]*sizeof(double);
        } else {
            invalid = 1;
            printf("Invalid tracking code type\n");
            break;
        }
        sum =sum+ x[j];
    } 

    if (!invalid) {
        printf("%d bytes", sum);  
    }
    return 0;
}
