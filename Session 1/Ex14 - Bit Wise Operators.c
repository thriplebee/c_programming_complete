#include <stdio.h>
// Bit wise operators - Bit level Operations
// &  |  ^  ~  >>  <<
main(){
    int a = 11;
    int b = 5;
    int c,d;

    printf("Binary And = %d",a&b);
    printf("\nBinary OR = %d",a|b);
    printf("\nBinary XOR = %d",a^b);
    printf("\nComplement %d",~a);
    c = a>>1;
    printf("\nRight Shift %d",c);
    d = a<<1;
    printf("\nLeft Shift %d",d);
}
