#include <stdio.h>
// Factorial
// Ex : 5! => 5*4*3*2*1
main(){
    int i,n;
    int fact = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    // For Loop
    for(i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("\nFactorial of %d : %d",n,fact);

    getch();
}
