#include <stdio.h>
#include <string.h>

int main()
{
   
   char a[50];  
   char b[50];
   char buffer[100];
   
   /* fetch input */
   printf("Your first string: ");
   fgets(a, 50, stdin);
   printf("Your second string: ");
   fgets(b, 50, stdin);

   /* work with the strings */
    
   strcpy(buffer, a);
   strcat(buffer, b);
   printf("%s", buffer);

   return(0);
} 
