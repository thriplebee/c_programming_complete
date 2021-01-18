#include <stdio.h>
// Pointers - Passing a whole unsized array
// Arrays are always passing as reference not as value

// Function Prototype
void foo(int param[]);
main(){
    int myArr[4] = {0,1,2,3};
    printf("Values Before Function : ");
    foo(myArr);

    printf("\n\n");

    printf("Values After Function : ");
    for(int i = 0; i < 4; i++){
        printf("\n%d",myArr[i]);
    }
}

// Function Declaration
void foo(int param[]){
    for(int i = 0; i < 4; i++){
        printf("\n%d",param[i]++);
    }
}

