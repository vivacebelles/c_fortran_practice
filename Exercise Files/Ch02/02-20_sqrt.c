#include <stdio.h>
#include <math.h>

int main()
{
    float r;
    float c;

    printf("Input a float number: ");
    scanf("%f", &c);
    r = sqrt(c);

	printf("The square root of %f is %f\n",c,r);

	return(0);
}
