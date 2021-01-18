#include <stdio.h>
#include <string.h>
// Strings - Inbuilt Functions - Concatenate 2 Strings
main(){

    char str1[20];
    char str2[20];
    printf("Enter a First Name : ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter a Last Name : ");
    fgets(str2, sizeof(str2), stdin);

    // Concatenate
    printf("Full name is %s",strcat(str1,str2));

    getch();
}




