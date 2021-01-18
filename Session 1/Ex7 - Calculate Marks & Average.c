#include <stdio.h>
// Calculate student total marks and average
main(){
    int maths,science,sinhala,total;
    float average;

    printf("Enter marks of Mathematics : ");
    scanf("%d",&maths);

    printf("\nEnter marks of Science : ");
    scanf("%d",&science);

    printf("\nEnter marks of Sinhala : ");
    scanf("%d",&sinhala);

    total = maths + science + sinhala;
    average = total/3.0;

    printf("\nTotal marks = %d \nAverage mark = %0.3f",total,average);

    getch();
}
