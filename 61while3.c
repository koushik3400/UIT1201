#include <stdio.h>

int main()
{
	int i,j;

	printf("Enter an integer for line width: ");
	scanf("%d",&j);
    i = 1;
	while(i<=j)
    {
		putchar('*');
        i++;
    }
	putchar('\n');

	return(0);
}
