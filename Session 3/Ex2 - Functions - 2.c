#include <stdio.h>
// Functions with parameters

// Function Declaration/Prototype
float getAnswer(float x, int y);

int main(){
    float num1;
    int num2;
    printf("Enter Numbers (Ex: 23,45) : ");
    scanf("%f,%d",&num1,&num2);

    // Calling function by passing values when printing
    printf("Answer is : %f",getAnswer(num1,num2));

    getch();

    return 0;
    // After the return statement it says execution of the function is over
}

// Function Definition
float getAnswer(float x, int y){
    // Send the addition of x + y to the place that calling happened
    return(x+y);
}
