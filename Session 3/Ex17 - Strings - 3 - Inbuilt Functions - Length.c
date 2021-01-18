#include <stdio.h>
#include <string.h>
// Strings - Inbuilt Functions - Length
main(){
    char str[20];
    printf("Enter a String : ");
    fgets(str, sizeof(str), stdin);
    printf("Length : %d",strlen(str));

    getch();
}
