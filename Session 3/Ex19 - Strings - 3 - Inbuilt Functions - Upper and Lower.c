#include <stdio.h>
#include <string.h>
// Strings - Inbuilt Functions - Upper Case and Lower Case
main(){

    char str[20];
    printf("Enter a String : ");
    fgets(str, sizeof(str), stdin);

    printf("\nUpper Case : %s\n",strupr(str));
    printf("Lower Case : %s",strlwr(str));

    getch();
}

