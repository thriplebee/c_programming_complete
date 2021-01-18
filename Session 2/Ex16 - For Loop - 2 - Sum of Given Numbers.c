#include <stdio.h>
// Sum of given numbers
main(){
    int n,ui,i;
    int sum = 0;

    printf("How many numbers do you want to enter? : ");
    scanf("%d",&n);

    // For Loop
    for(i = 0; i < n; i++){
        printf("Enter a number : ");
        scanf("%d",&ui);
        sum += ui;
    }

    printf("\nSum is %d",sum);

    getch();
}
