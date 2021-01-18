#include <stdio.h>
#include <stdlib.h>
// Fibonacci Series
// All subsequent numbers are calculated using previous 2 numbers
// Get first 2 numbers as 0 and 1
main(){
    int i,n,temp;
    int pre = 0;
    int cur = 1;

    printf("Enter Number : ");
    scanf("%d",&n);
    printf("%d\t%d",pre,cur);

    // For loop
    for(i = 3; i <= n; i++){
        // Important
        temp = cur;
        cur = pre + cur;
        pre = temp;

        printf("\t%d",cur);
    }

    getch();
}

