#include <stdio.h>
// Patter 2 - Triangle with Nested Loops
//  *
//  **
//  ***
//  ****
//  *****
main(){
    // For lines
    for(int i = 0; i < 5; i++){

        // For stars
        for(int k = 0; k <= i; k++){
            printf("*");
        }

        printf("\n");
    }

    getch();
}


