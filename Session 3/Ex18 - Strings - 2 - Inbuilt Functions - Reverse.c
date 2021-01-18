#include <stdio.h>
#include <string.h>
// Strings - Inbuilt Functions - Reverse
main(){
    char str[20];
    printf("Enter a String : ");
    fgets(str, sizeof(str), stdin);
    printf("Reverse : %s",strrev(str));

    getch();
}
