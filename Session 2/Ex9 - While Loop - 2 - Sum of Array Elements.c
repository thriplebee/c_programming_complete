#include <stdio.h>
// With Arrays
// Get sum of marks array
main(){
   int marks[10] = {80,88,90,77,67,55,66,60,45,39};
   int count = 0;
   int sum = 0;
   int size = sizeof(marks) / sizeof(marks[0]);

   while(count < size){
        printf("Student %d marks = %d\n", count+1, marks[count]);
        //sum = sum + marks[count];
        sum += marks[count];
        count = count + 1;
   }

   printf("\nSum of marks = %d", sum);

   getch();
}
