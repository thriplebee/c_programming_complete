#include <stdio.h>
// Recursion - Calling a function inside that function
// When a repetition is required
// Can be used when you have to work on values returned by previous call.

// Function Declaration
void recur(int x);
main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    // Calling
    recur(n);

    getch();
}

// Function Definition
void recur(int x){
    printf("%d\n",x);
    if(x > 0 && x <= 20){
        // Recursion
        recur(x-1);
    }
}
