#include <stdio.h>
// Break Statement with While loop
// Can be use to stop/break the whole loop
main(){
    int count = 0;

    while(count < 5){
        printf("Instruction 1\n");
        printf("Instruction 2\n");

        count++;

        if(count % 2 == 0){
            printf("Instruction 3\n");
            break; // Stop the execution of loop
            printf("Instruction 4\n");
        }
        printf("Instruction 5\n");

    }

    printf("Instruction 6\n");

    getch();
}



