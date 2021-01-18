#include <stdio.h>
// Fibonacci, Factorial, Prime Number Program
// With Functions

// Function Prototypes
factorial(int x);
isPrime(int x);
fibonacci(int x);

main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    // Calling
    factorial(n);
    isPrime(n);
    fibonacci(n);

    getch();
}

// For Factorial
factorial(int x){
    int i;
    int fact = 1;
    for(i = 1; i <= x; i++){
        fact = fact * i;
    }
    printf("\nFactorial of %d : %d\n",x,fact);
}

// For Check if it is a Prime Number
int isPrime(int x){
    int i;
    for(i = 2; i <= x/2; i++){
        if(x % i == 0){
            printf("%d is not a Prime Number!\n",x);
            return 0;
            // If you use return statement it should be the last statement of a function
            // After that it says execution of the function is over
        }
    }
    printf("%d is a Prime Number!\n",x);
    return 0;
}

// For Fibonacci Series
fibonacci(int x){
    int pre = 0;
    int cur = 1;
    int i,temp;

    printf("Fibonacci Series : %d\t%d",pre,cur);
    for(i = 3; i <= x; i++){
        temp = cur;
        cur = pre + cur;
        pre = temp;
        printf("\t%d",cur);
    }
}

