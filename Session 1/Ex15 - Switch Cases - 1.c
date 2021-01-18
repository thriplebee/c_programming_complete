#include <stdio.h>
// Switch Case - Case control structure
main(){
    char grade;
    printf("Enter your grade : ");
    scanf("%c",&grade);

    // Switch
    switch(tolower(grade)){
    case 'a':
        printf("Well done!");
        break;
    case 'b':
        printf("Good!");
        break;
    case 'c':
        printf("Not Bad!");
        break;
    case 's':
        printf("Ok!");
        break;
    default:
        printf("You have to work hard!");
        break;
    }
}
