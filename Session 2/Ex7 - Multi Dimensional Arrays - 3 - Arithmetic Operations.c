#include <stdio.h>
// Arithmetic Operations with User Inputs
// For Marks of 2 Subjects for 2 Students
main(){
    int marks[2][2];
    int st1total, st2total;

    printf("Enter Student 1 Subject Marks (Ex: 50,60) : ");
    scanf("%d,%d",&marks[0][0],&marks[0][1]);
    printf("\nEnter Student 2 Subject Marks (Ex: 50,60) : ");
    scanf("%d,%d",&marks[1][0],&marks[1][1]);

    // Calculations
    st1total = marks[0][0] + marks[0][1];
    st2total = marks[1][0] + marks[1][1];

    printf("\n\nStudent 1 Total Marks : %d \nStudent 2 Total Marks : %d",st1total,st2total);

    if(st1total > st2total){
        printf("\nStudent 1 is brighter than Student 2..");
    }
    else if(st1total == st2total){
        printf("\nBoth are Bright Students..");
    }
    else{
        printf("\nStudent 2 is brighter than Student 1..");
    }

    getch();

}
