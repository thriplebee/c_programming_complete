#include <stdio.h>
// Swapping 2 numbers
main(){
    int a,b,temp;
    printf("Enter numbers : ");
    scanf("%d,%d",&a,&b);
    printf("Before Swapping : \na = %d\nb = %d",a,b);

    // Swapping
    temp = a;
    a = b;
    b = temp;

    printf("\n\nAfter Swapping : \na = %d\nb = %d",a,b);

    getch();
}
