#include <stdio.h>
#include <stdlib.h>
// Recursion - Factorial

void facto(int x);
main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    // Calling
    facto(n);

    getch();
}

// Factorial
void facto(int x){
    static int fact = 1;
    if(x == 0){
        printf("Factorial is %d",fact);
        getch();
        exit(0);
    }

    fact = fact * x;
    // Recursion
    facto(x-1);
}


