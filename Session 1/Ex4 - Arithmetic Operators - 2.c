#include <stdio.h>
// Increment Decrement
main(){
    int x = 10;
    int y = 20;
    int a;
    int b;

    printf("Pre Increment\n"); // Decrement (--) also same as this | Decreasing
    a = ++x; // ++ means increase by 1 and -- means decrease by 1
    printf("a = %d",a);
    printf("\nx = %d",x);

    printf("\n\nPost Increment\n"); // Decrement (--) also same as this | Decreasing
    b = y++;
    printf("b = %d",b);
    printf("\ny = %d",y);

    getch();

    // Decrement is same as above
}
