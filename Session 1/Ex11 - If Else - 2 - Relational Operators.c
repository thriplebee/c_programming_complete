#include <stdio.h>
// If Else with Relational Operators
main(){
    int x = 10;
    int y = 20;
    int z = 10;
    int w = 30;

    if(x == y){
        printf("X is equal to Y");
    }
    else if(x != w){
        printf("X is not equal to W");
    }
    else if(y >= w){
        printf("Y is greater or equal than W");
    }
    else if(z <= x){
        printf("Z is equal or less than to X");
    }
    else{
        printf("I don't know what to tell...");
    }

    getch();
}
