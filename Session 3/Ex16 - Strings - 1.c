#include <stdio.h>
// Strings
/*
Strings are actually one-dimensional array of characters terminated
by a null character '\0'. Thus a null-terminated string contains the
characters that comprise the string followed by a null.
*/
main(){
    char greetings1[6] = {'H','e','l','l','o','\0'};
    printf("%s\n",greetings1);

    char greetings2[] = "Hello";
    printf("%s\n",greetings2);

    char *greetings3 = "Hello";
    printf("%s\n",greetings3);

    getch();
}
