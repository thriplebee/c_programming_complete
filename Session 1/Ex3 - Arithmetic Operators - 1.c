#include <stdio.h>
// Arithmetic Operators + - / % *
main(){
    int num1 = 40;
    int num2 = 70;
    float num3 = 4545.66;
    float num4 = 345.222;

    int add1,sub1,multi1,div1,mod1;
    float add2,sub2,multi2,div2;

    // Using Int
    add1 = num1 + num2;
    sub1 = num2 - num1;
    multi1 = num1 * num2;
    div1 = num2 / num1;
    mod1 = num2 % num1;

    printf("---------Operations using Integers--------\n\n");
    printf("Addition : %d \n",add1);
    printf("Substraction : %d \n",sub1);
    printf("Multiplication : %d \n",multi1);
    printf("Division : %d \n",div1);
    printf("Modulus : %d",mod1);

    printf("\n\n============================\n\n");

    // Using Float
    add2 = num4 + num3;
    sub2 = num3 - num4;
    multi2 = num4 * num3;
    div2 = num4 / num3;
    printf("---------Operations using Floats--------\n\n");
    printf("Addition : %f \n",add2);
    printf("Substraction : %f \n",sub2);
    printf("Multiplication : %f \n",multi2);
    printf("Division : %f \n",div2);

    getch();
}
