#include <stdio.h>
// Patter 4 - Triangle with Nested Loops
//  *****
//   ****
//    ***
//     **
//      *
main(){
    // For lines
    for(int i = 0; i < 5; i++){
        // For spaces
        for(int j = 0; j < i; j++){
            printf(" ");
        }

        // For stars
        for(int k = 5; k > i; k--){
            printf("*");
        }

        printf("\n");
    }

    getch();
}


