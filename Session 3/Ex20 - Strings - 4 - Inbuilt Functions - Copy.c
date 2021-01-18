#include <stdio.h>
#include <string.h>
// Strings - Inbuilt Functions - Copying
main(){

    char str1[20];
    char str2[20];
    printf("Enter a String : ");
    fgets(str1, sizeof(str1), stdin);

    // Copying
    strcpy(str2,str1);
    printf("After Copying : %s",str2);

    getch();
}


