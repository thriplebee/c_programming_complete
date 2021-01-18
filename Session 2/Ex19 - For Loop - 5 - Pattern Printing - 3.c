#include <stdio.h>
// Patter 3 - Triangle with Nested Loops
//  *****
//  ****
//  ***
//  **
//  *
main(){
    // For lines
    for(int i = 0; i < 5; i++){
        // For Stars
        for(int j = 5; j > i; j--){
            printf("*");
        }

        printf("\n");
    }

    getch();
}


