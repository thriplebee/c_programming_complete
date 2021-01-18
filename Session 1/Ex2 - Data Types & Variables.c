#include <stdio.h>
// Data Types & Variables
main(){
   int age = 20;
   char grade = 'A';
   float weight = 23.44;
   double longtitue = 56.768678;

   // Use variable with format specifiers
   printf("My age is %d \n",age);
   printf("My grade is %c \n",grade);
   printf("My weight is %0.1f \n",weight);
   printf("Longtitude is %lf",longtitue);

   printf("\n\nSize of int : %d",sizeof(age));
   printf("\nSize of char : %d",sizeof(grade));
   printf("\nSize of float : %d",sizeof(weight));
   printf("\nSize of double : %d",sizeof(longtitue));

   getch();
}
