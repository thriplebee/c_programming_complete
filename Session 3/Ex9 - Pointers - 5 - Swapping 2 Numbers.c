#include <stdio.h>
// Swapping 2 numbers using pointers and parameterized function

swap(int *x, int *y);
main(){
    int a, b;
    printf("Enter 2 numbers (Ex: 30,20) : ");
    scanf("%d,%d",&a,&b);
    printf("\nBefore Swapping : \n a = %d\n b = %d",a,b);

    // Calling by passing addresses
    swap(&a,&b);

    printf("\nAfter Swapping : \n a = %d\n b = %d",a,b);

    getch();
}

// Swapping
swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
