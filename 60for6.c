#include <stdio.h>

int main()
{
	int i,j;

	printf("Enter an integer for line width: ");
	scanf("%d",&j);

	for(i=1 ; i<=j ; i++)
    {
		putchar('*');
    }
	putchar('\n');

	return(0);
}
