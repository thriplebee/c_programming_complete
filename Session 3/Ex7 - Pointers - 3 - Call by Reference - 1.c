#include <stdio.h>
// Call/Pass by Reference
int add(int *a, int *b);
main(){
    int a = 10;
    int b = 20;
    int c;
    // Calling by passing addresses/references
    c = add(&a,&b);
    printf("Addition is %d",c);

    getch();
}

int add(int *a, int *b){
    int c = *a + *b;
    return c;
}
