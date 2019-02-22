#include <stdio.h>

int main()
{
	int array[] = { 11, 13, 17, 19 };
	int x;
    int *aptr;
    
    aptr = array; 
    aptr = array + 1;

    printf("The element is %d\n",*aptr);

	return(0);
}

