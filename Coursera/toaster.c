/*You are programming a toaster! The toaster does not have a lot of memory.
You need to be careful about the data types you use (remember that different data types use different amounts of memory). 
To make this easier, you'd like an easy way to track how much memory your variables are going to use.
Your program should read a character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double).
Next it should read an integer that indicates how many variables of the given type you wish to store.
Your program should then calculate the amount of memory required to store the given variables.
Your program needs to be written in such a way that it would also perform correctly on other computers. 
In other words, rather than hard-coding specific sizes for the different variable types.
Your program needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.*/





#include <stdio.h>


int main(){
    int input,size;
    char type;
    scanf("%c %d",&type,&input);
    int mb=1000000;
    int kb=1000;
    int resmb;
    int reskb;
    int resb;



    size=input;
    if(type=='i'){
        size=input*sizeof(int);
    }else if(type=='s'){
        size=input*sizeof(short);
    }else if(type=='c'){
        size=input*sizeof(char);
    }else if(type=='d'){
        size=input* sizeof(double);
    }


    resmb = size / mb;
    size %= mb;
    reskb = size / kb;
    resb = size % kb;

    if (resmb > 0) {
        printf("%d MB and %d KB and %d B\n", resmb, reskb, resb);
    } else if (reskb > 0) {
        printf("%d KB and %d B\n", reskb, resb);
    } else {
        printf("%d B\n", resb);
    }



    return 0;
}
