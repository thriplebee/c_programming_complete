#include <stdio.h>
// Local Variables
// Declared within the functions or specific blocks and can be used
// only within those functions or specific blocks
main(){
    // Local Variables
    int x = 20;
    int y = 30;

    printf("Before Y : %d\n",y);
    //Use (Change)
    y = 50;
    printf("After Y : %d",y);

    if(x < y){
        // Declare onside if block
        int k = 60;
        printf("Before K is %d\n",k);
        k = 80;
        printf("Before K is %d\n",k);
    }

    // Can't use k
    printf("Print K %d",k);

    getch();
}
