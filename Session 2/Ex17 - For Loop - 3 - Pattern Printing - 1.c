#include <stdio.h>
// Patter 1 - Triangle with Nested Loops
//      *
//     **
//    ***
//   ****
//  *****
main(){
    // For lines
    for(int i = 0; i < 5; i++){
        // For spaces
        for(int j = 0; j < 5-i-1; j++){
            printf(" ");
        }

        // For stars
        for(int k = 0; k <= i; k++){
            printf("*");
        }

        printf("\n");
    }

    getch();
}

