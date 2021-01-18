#include <stdio.h>
// Static Variables
/*
A Static variable is able to retain its value between different function calls.
The static variable is only initialized once, if it is not initialized,
then it is automatically initialized to 0. Here is how to declare a static
variable.
*/
void func1(){
    int a = 1;

    // Static Variable
    static int b = 100;

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    a++;
    b++;
}

main(){
    // Calling function
    func1();
    func1();
    func1();

    getch();
}


