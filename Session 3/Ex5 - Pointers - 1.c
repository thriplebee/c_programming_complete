#include <stdio.h>
// Pointers
// Some kind of variable that can hold (refer) an address of another actual variable
main(){
    int age = 20;
    int *ptr = &age;

    printf("Value of age : %d\n\n",*&age);
    printf("Value of age : %d\n\n",*(&age));
    printf("Address of age : %x\n\n",&age);
    printf("Address of age : %x\n\n",ptr);
    printf("Value of age : %d\n\n",*ptr);
}
