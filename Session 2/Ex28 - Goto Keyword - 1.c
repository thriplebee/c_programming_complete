#include <stdio.h>
// Goto Keyword
// Goto any label(section) by skipping some code
// Any number of goto to any label
main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if(age < 0){
        goto invalidator;
    }

    printf("Your age is %d\n",age);

    // Label
    invalidator:
        printf("Wrong Entity!");

    getch();
}
