#include <stdio.h>
#include <string.h>
// Strings - Inbuilt Functions - Compare 2 Strings
main(){

    char str1[20];
    char str2[20];
    printf("Enter a String 1 : ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter a String 2 : ");
    fgets(str2, sizeof(str2), stdin);

    // Compare
    if(strcmp(str1,str2) == 0){
        printf("Str1 is equal to Str2..");
    }
    else{
        printf("Str1 is not equal to Str2..");
    }

    getch();
}



