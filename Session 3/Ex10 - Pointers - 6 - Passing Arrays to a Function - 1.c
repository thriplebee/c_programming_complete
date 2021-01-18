#include <stdio.h>
// Pointers - Passing single element of an array using pointers

// Function Prototype
void foo(int *param);
main(){
    int myArr[4] = {0,1,2,3};
    foo(&myArr[2]);
    printf("After Calling : %d",myArr[2]);
}

// Function Definition
void foo(int *param){
    printf("%d\n",*param);
    // Increment that value
    (*param)++;
}
