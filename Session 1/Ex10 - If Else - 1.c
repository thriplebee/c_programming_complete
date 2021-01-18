#include <stdio.h>
// If Else - Decision Control Structure
main(){
    int a = 10;
    int b = 20;

    // If- Else
    if(a == b){
        printf("A is equal to B");
    }
    else{
        printf("A is not equal to B");
    }

    // Multiple Ifs
    if(b == 20){
        printf("\nB is equal to 20");
    }
    if(a == 10){
        printf("\nA is equal to 10");
    }
    else{
        printf("\nA is not equal to 10");
    }

    getch();
}
