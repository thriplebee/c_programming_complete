#include <stdio.h>
// Reverse an Array
main(){
    char name[] = "Sandun Tharaka";
    int size = sizeof(name)/sizeof(name[0]);
    int count = size-2;

    // Reverse
    while(count >= 0){
        printf("%c",name[count]);
        count--;
    }

    getch();
}
