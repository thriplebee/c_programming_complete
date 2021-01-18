#include <stdio.h>
// Multi dimensional array inputs with Nested Loops
// Inputs for A/L Biology 3 subjects marks for 3 students
// Calculate an Average for each Student
main(){
    int marks[3][3];
    int count1 = 0;
    int count2 = 0;
    int ui;
    int sum = 0;
    float avg = 0;

    // For Rows
    while(count1 < 3){
        sum = 0;
        avg = 0;
        count2 = 0;
        // For Columns
        while(count2 < 3){
            printf("Subject %d marks on Student %d : ",count2+1,count1+1);
            scanf("%d",&ui);
            // Assign marks to 2-d array
            marks[count1][count2] = ui;
            count2++;
            // Sum of marks
            sum = sum + ui;
        }
        // Calculate Average
        avg = sum / 3.0;
        printf("Average : %f",avg);
        printf("\n---------------------------\n");
        count1++;
    }

    getch();

}
