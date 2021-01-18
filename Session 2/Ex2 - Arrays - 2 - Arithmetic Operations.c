#include <stdio.h>
// Arithmetic operations on Array elements
// Replace Array elements
main(){
    int myArr[5] = {12,44,23,5,8};
    int sum = myArr[2] + myArr[4];

    printf("Sum is %d", sum);
    printf("\n4th element of array before replace is %d",myArr[3]);

    myArr[3] = sum;
    printf("\n4th element of array after replace is %d",myArr[3]);

    getch();
}

