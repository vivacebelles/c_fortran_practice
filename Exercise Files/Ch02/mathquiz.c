#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;

    printf("Please input a value for a: ");
    scanf("%f", &a);
    printf("\nPlease input a value for b: ");
    scanf("%f", &b);
    printf("\n The value of a is: %f", a);
    printf("\n The value of b is: %f", b);
}

    printf("\nThe value of a plus b is: %f", a+b);
    printf("\nThe value of a minus b is %f", a-b);
    printf("\nThe value of a multiplied by b is %f", a * b);
    printf("\nThe value of a divided by b is %f", a/b);
    printf("\nThe value of a to the bth power is %f", pow(a, b));
    printf("\nThe values of the square roots for a and b is %f and %f, respectively\n", sqrt(a), sqrt(b));

    return (0);
}

