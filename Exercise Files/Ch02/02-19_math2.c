#include <stdio.h>

int main()
{
	int x = 10;
    int y;

    printf("Input an integer: ");
    scanf("%d", &y);
	printf("%d\n",x);
	printf("Now I am going to add my input and the number given here  plus one!");
    x = x + y + 1;
	printf("\n%d\n",x);

	return(0);
}

