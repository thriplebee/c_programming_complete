#include <stdio.h>
#include <stdlib.h>
// Prime Number
// Number that can divide by only 1 and it self
// To check that we should divide that number from 2 to that number (or n/2)
main(){
    int i,n;
    printf("Enter a number : ");
    scanf("%d",&n);

    // For Loop
    for(i = 2; i <= n/2; i++){
        //Logic
        if(n % i == 0){
            printf("Not a Prime Number!");
            getch();
            exit(0);
        }
    }
    printf("Prime Number!");

    getch();
}
