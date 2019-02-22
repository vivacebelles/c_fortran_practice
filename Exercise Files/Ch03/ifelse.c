#include <stdio.h>
#include <math.h>

int main()
{
   int a;
   printf("Please put in an integer here: \n");
   scanf("%d", &a);

   if (a <10){
       printf("The value is less than 10!\n");
   }
   else if (a ==10) {
       printf("The value is exactly 10!\n");
   }
   else if (a >10) {
       printf("The value is more than 10!\n");
   }
   else {
       printf("What did you put in?");
   }
   return(0);
}
