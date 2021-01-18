#include <stdio.h>
// Loop Condrol Structures\
// For repetitive tasks until a condition gets false
// While Loop
main(){
    // Without Loops
    printf("You got 1 rupees\n");
    printf("You got 2 rupees\n");
    printf("You got 3 rupees\n");
    printf("You got 4 rupees\n");
    printf("You got 5 rupees\n");

    // With While Loop
    printf("\n\n----While Loop----\n\n");
    int count = 0;
    while(count < 20){
        printf("You got %d rupees\n",count+1);
        count++;
    }
}
