#include <stdio.h>
// Strings on Character Arrays
main(){
    char myName[] = "ThripleBee";
    char yourName[16] = "Johnathan Wyane";
    // Array size
    int size = sizeof(myName)/sizeof(myName[0]);

    printf("Name is %s",myName);
    printf("\nSize of the Array is %d",size);
    printf("\n11th Element is %d",myName[10]);

    printf("\n\nYour Name is %s",yourName);
}
