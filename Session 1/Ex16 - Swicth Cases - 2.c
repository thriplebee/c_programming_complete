#include <stdio.h>
// Perform arithmetic operations
main(){
    char ope;
    float num1,num2;

    printf("Enter the operation : ");
    scanf("%c",&ope);
    printf("\nEnter Numbers (Ex: 23,45) : ");
    scanf("%f,%f",&num1,&num2);

    // Switch
    switch(ope){
    case '+':
        printf("Addition is %0.1f",num1+num2);
        break;
    case '-':
        printf("Substraction is %0.1f",num1-num2);
        break;
    case '*':
        printf("Multiplication is %0.1f",num1*num2);
        break;
    case '/':
        printf("Division is %0.1f",num1/num2);
        break;
    default:
        printf("Invalid Inputs");
        break;
    }
}

