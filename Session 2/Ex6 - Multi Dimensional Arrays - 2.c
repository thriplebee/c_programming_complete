#include <stdio.h>
// Multi Dimensional Arrays
// Temperatures of 2 cities in 5 days
main(){
    int temp[5][2] = {
                        {20,30},
                        {32,23},
                        {22,33},
                        {18,25},
                        {31,35}
                     };

    printf("\nDay 1 :\n City 1 Temp : %d  And City 2 Temp : %d",temp[0][0],temp[0][1]);
    printf("\nDay 2 :\n City 1 Temp : %d  And City 2 Temp : %d",temp[1][0],temp[1][1]);
    printf("\nDay 2 :\n City 1 Temp : %d  And City 2 Temp : %d",temp[2][0],temp[2][1]);

    printf("\n\n---------Array Size----------\n");
    printf("Array size : %d",5*2);
    printf("\nSize of one element in a row : %d",sizeof(temp[0][0]));
    printf("\nSize of a row : %d",sizeof(temp[0]));
    printf("\nNumber of columns in a row : %d",sizeof(temp[0])/sizeof(temp[0][0]));

    getch();
}

