#include <stdio.h>
// Marriage eligibility checking program
main(){
    int Age;
    char MartialStatus, Gender;
    system("CLS");
    printf("Enter Martial Status, Gender, Age : (Ex : m,f,25) : ");
    scanf("%c,%c,%d",&MartialStatus, &Gender, &Age);

    if(MartialStatus == 'm'){
        printf("You can't marry..");
    }
    else if(MartialStatus == 'u' || MartialStatus == 's'){
        if(Gender == 'm'){
            if(Age >= 21)
                printf("You can marry..");
            else
                printf("You can't marry..");
        }
        else if(Gender == 'f'){
            if(Age >= 18)
                printf("You can marry..");
            else
                printf("You can't marry..");
        }
        else
            printf("Invalid input as a Gender..");
    }
    else
        printf("Invalid input as a Martial Status..");

    getch();
}
