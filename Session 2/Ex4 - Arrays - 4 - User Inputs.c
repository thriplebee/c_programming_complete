#include <stdio.h>
// Get a name from user and insert it into the array
main(){
    char Name[20];
    char NameAgain[20];
    printf("Enter your name : ");
    scanf("%s",&Name);
    printf("\nYour name is %s",Name);

    // Get Full Name
    printf("\n\nEnter again your name : ");
    //gets(NameAgain);
    fgets(NameAgain,sizeof(NameAgain),stdin);
    printf("\nYour name is ",NameAgain);
    //puts(NameAgain);
}
