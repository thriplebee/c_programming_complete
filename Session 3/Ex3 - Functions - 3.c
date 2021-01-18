#include <stdio.h>
// void, int, float and char functions

// Function Declaration
void printName(char n[20]);
void printWeightHeight(float w, float h);
int calculateSalary();
char getGrade(int m);

main(){
    // For printing name
    char name[20];
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    // Calling
    printName(name);

    // For printing weight & height
    printf("----------------------\n");
    float weight, height;
    printf("\nEnter weight and height (Ex: 5.6,56.7) : ");
    scanf("%f,%f",&weight,&height);
    // Calling
    printWeightHeight(weight,height);

    // For calculating salary
    printf("\n----------------------\n");
    // Calling
    int salary = calculateSalary();
    printf("\nSalary is %d",salary);

    // For getting grade
    printf("\n----------------------\n");
    int marks;
    printf("\nEnter your marks : ");
    scanf("%d",&marks);
    printf("\nYour grade is : %c",getGrade(marks));
    getch();
}

// Function Definitions
// Print Name
void printName(char n[20]){
    printf("\nYour name is %s",n);
}

// Print Weight and Height
void printWeightHeight(float w, float h){
    printf("\nYour weight is %0.2f",w);
    printf("\nYour height is %0.2f",h);
}

// Calculate Salary
int calculateSalary(){
    int sal,csal;
    printf("\nEnter your salary : ");
    scanf("%d",&sal);
    // Calculation
    csal = sal + 1200;

    return csal;
}

// Get Grade
char getGrade(int m){
    if(m >= 75){
        return 'A';
    }
    else if(m >= 65){
        return 'B';
    }
    else if(m >= 55){
        return 'C';
    }
    else{
        return 'W';
    }
}
