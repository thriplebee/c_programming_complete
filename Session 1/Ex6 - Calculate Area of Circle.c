#include <stdio.h>
// Calculate the area of a circle
main(){
    const float PI = 3.14;
    float r,area;

    printf("Enter the radius of circle : ");
    scanf("%f", &r);

    //Calculation
    area = PI * (r*r);

    printf("\nArea is : %0.2f",area);
}
