#include <stdio.h>
// Store user inputs inside an Array and print them
main(){
    int myArr[10];
    int count = 0;
    int size = 10;

    // Get inputs
    while(count < size){
        printf("Enter a number : ");
        scanf("%d",&myArr[count]);
        count++;
    }

    count = 0;

    // Print an Array
    printf("\n------------------\n");
    while(count < size){
        printf("%d\n",myArr[count]);
        count++;
    }

    getch();
}
