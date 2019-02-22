#include <stdio.h>

int main()
{
	int a,b,c;

	printf("Type three letters: ");
	a = getchar();
	putchar(a);
	b = getchar();
	putchar(b);
	c = getchar();
	putchar(c);
    printf("I had these three letters typed: %a, %b, %c");

	return(0);
}

