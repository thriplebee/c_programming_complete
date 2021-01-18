#include <stdio.h>
#include <stdlib.h>
// Recursion - Fibonacci Series

void fibon(int pre, int cur, int x);
main(){
    int n;
    int pre  = 0;
    int cur = 1;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("%d\t%d",pre,cur);
    // Calling
    fibon(pre,cur,n);

    getch();
}

// Fibonacci
void fibon(int pre, int cur, int x){
    int temp;
    if(x == 2){
        getch();
        exit(0);
    }

    temp = cur;
    cur  = pre + cur;
    pre = temp;
    printf("\t%d",cur);
    // Recursion
    fibon(pre,cur,x-1);
}

