#include <stdio.h>
// Functions
// Block of code that can perform a specific task
// Functions are reusable
// Makes programs easier to understand

// Function Declaration/Prototype
void printName();

main(){
    // Calling the function
    printName();

    getch();

}

// Function Definition
void printName(){
    char name[20];
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);

    printf("Your name : %s",name);
}

