#include <stdio.h>
double metertofeet(double);
double gramtopound(double);
double celsuiscon(double);

int main (void) {
    int nocon;
    char charc;
    double input;
    scanf("%d", &nocon);
    double arr[nocon];
    char arr1[nocon];

    for (int i = 0; i < nocon; i++) {
        scanf("%lf %c", &input, &charc);
        arr[i] = input;
        arr1[i] = charc;
    }

    for (int j = 0; j < nocon; j++) {
        if (arr1[j] == 'm') {
            metertofeet(arr[j]);
        }else if(arr1[j]=='g'){
            gramtopound(arr[j]);
        }else if(arr1[j]=='c'){
            celsuiscon(arr[j]);
        }
    }
    return 0;
}

double metertofeet(double meter){
double answer=0;
answer = meter*3.2808;
printf("%.6lf ft\n",answer);
return answer;
}

double gramtopound(double gram){
    double answer=0;
    answer = gram*0.002205;
    printf("%.6lf lbs\n",answer);
    return answer;
}

double celsuiscon(double fahr){
    double answer=0;
    answer = 32+(1.8*fahr);
    printf("%.6lf f\n",answer);
    return answer;
}
