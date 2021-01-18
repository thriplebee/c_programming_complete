#include <stdio.h>
// Continue Statement with While loop
// Can be use to skip few instructions
main(){
    int count = 0;

    while(count < 5){
        printf("Instruction 1\n");
        printf("Instruction 2\n");

        count++;

        if(count % 2 == 0){
            printf("Instruction 3\n");
            continue; // Skip bellow instrcutions only for this iteration
            printf("Instruction 4\n");
        }
        printf("Instruction 5\n");

    }

    getch();
}


