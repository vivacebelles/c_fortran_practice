#include <stdio.h>

int main()
{
	char name[30];		/* room for 14 characters */

	printf("Your name? ");
	scanf("%s",name);
	printf("You are %s.\n",name);

	return(0);
}

