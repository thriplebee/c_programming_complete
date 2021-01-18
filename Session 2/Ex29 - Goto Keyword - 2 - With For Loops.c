#include <stdio.h>
// Goto Keyword with For loops
// A valid use of goto could be inside of multiple nested loops
main(){
    int n1,n2,n3;
    printf("Enter 3 numbers (Ex: 3,45,6) : ");
    scanf("%d,%d,%d",&n1,&n2,&n3);

    // Sample for loops
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            for(int k = 0; k < n3; k++){
                if(n2 == n3)
                    goto invalidator;
                    
                printf("Printing....\n");
            }
        }
    }

    // Label
    invalidator:
        printf("n2 is eqaul to n3");

    getch();
}

