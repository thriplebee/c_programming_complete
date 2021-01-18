#include <stdio.h>
// Nested If Else with conditional Operators
main(){
    int a = 20;
    int b = 30;
    int c = 20;

    if(a >= b && a < c){
        printf("a >= b and a < c");
    }
    else if(b >= c){
        if(b != 20 || b > a){
            printf("b not equal to 20 or b greater than a");
        }
        else{
            printf("b not equal to 20");
        }
    }
    else{
        printf("I don't know what to tell..");
    }

    getch();
}
