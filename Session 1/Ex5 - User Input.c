#include <stdio.h>

// User Input (scanf)
main(){
    int num1, num2, answer;

    printf("Enter an integer number : ");
    scanf("%d", &num1);
    printf("\nEnter another number : ");
    scanf("%d", &num2);

    // Calculation
    answer = num1 + num2;
    printf("\nAnswer = %d",answer);

    getch();
}
