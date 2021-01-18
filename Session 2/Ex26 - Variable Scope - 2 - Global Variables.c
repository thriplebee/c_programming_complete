#include <stdio.h>
// Global Variables
// Declared outside of a functions or specific blocks
// and can be accessed inside any functions and specific blocks

// Declare a Global Variable
int all = 100;

main(){
    // Local Variables
    int a = 20;

    // all is global for this funtion
    printf("Before All : %d\n",all);
    //Change that global variable
    all = 50;
    printf("After All : %d",all);

    if(all == 50){
        // a is global for this block
        printf("before a : %d\n",a);
        //Change that global variable
        a = 70;
        printf("after a : %d\n",a);

        // all is global for this block as well
        printf("before all : %d\n",all);
        //Change that global variable
        all = 90;
        printf("after all : %d\n",all);
    }

    getch();
}

