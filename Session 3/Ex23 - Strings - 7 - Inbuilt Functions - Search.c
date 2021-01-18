#include <stdio.h>
// Strings - Search Strings
main(){
   char text[50] = "Subscribe to thriple bee.com";
   char find1[12] = "ple";
   char find2 = '.';
   char *search1;
   char *search2;

   // Search target string for the substring find1
   search1 = strstr(text, find1);
   // Search target string for the character find2
   search2 = strchr(text, find2);

   printf("The string after substring '%s' is: %s\n",find1,search1);
   printf("The string after '%c' is: %s\n",find2,search2);

   getch();
}
