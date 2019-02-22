#include <stdio.h>

int main()
{
    int input;

    printf("Type an integer: ");
    scanf("%d", &input);

    switch(input)
    {
        case 1:
            puts("Red");
            break;
        case 2:
            puts("Green");
            break;
        case 3:
            puts("Blue");
            break;
        default:
            puts("That is an invalid choice!");
    }

   return(0);
}

