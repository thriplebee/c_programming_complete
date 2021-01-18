#include <stdio.h>
// Pointer Arithmetics = Arithmetic Operations on pointers

main(){
    int myArr[4] = {0,5,2,3};
    int *ptr = &myArr[0];
    printf("Element 1 : %d\n",*ptr);
    printf("Address 1 : %x\n",ptr);

    //*ptr = *ptr + 2; Change value;
    
    // Arithmetic operation on ptr / incrementing the address by 1
    *ptr++;

    printf("Element 2 : %d\n",*ptr);
    printf("Address 2 : %x\n",ptr);
}


