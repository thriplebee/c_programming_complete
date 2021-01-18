#include <stdio.h>
// Create an M x N matrix and re print it.
main(){
    int i,j,m,n;
    int matrix[5][5];

    printf("Enter the order of matrix (Ex: 2,3) : ");
    scanf("%d,%d",&m,&n);
    printf("\n Enter matrix elements : \n");

    //Get Inputs
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d",&matrix[i][j]);

    //Print the matrix
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
            printf("%d",matrix[i][j]);
        printf("\n");
    }

    getch();
}


