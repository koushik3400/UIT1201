#include <stdio.h>

int main()
{
	int x,y;

	printf("Enter an positive integer: ");
	scanf("%d",&y);
	for( x=1 ; x<=y ; x++ )
    {
        printf("%d\n",x);
    }
	return(0);
}

