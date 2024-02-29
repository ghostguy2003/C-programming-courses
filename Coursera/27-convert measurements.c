/*Write a C-program that converts metric measurements to imperial system values. Measurements are provided to your program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.
Here are the conversion rules to use:
1 meter = 3.2808 feet;
1 gram = 0.002205 pounds;
temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.
On the first input line you are given the number of conversions to be made.
Each of the following lines contains a value to be converted as well as its unit: m, g or c (for meters, grams or degrees Celsius). There will be a space between the number and the unit.
You should print your output value for each input line immediately after calculating it (ie, you do not have to wait until you have read all inputs).
Display the converted values with 6 decimal places, followed by a space and their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit).
Each conversion result should be printed on its own line, and you should store and display all decimal values as doubles.*/



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
