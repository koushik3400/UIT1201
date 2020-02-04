#include <stdio.h>

int main()
{
	int x;

	printf("Enter a number: ");
	scanf("%d",&x);
	if( x > 20 )
	{
		puts("You entered a number greater than 20");
		x += 10;
		printf("The updated number is %d\n",x);
	}
	return(0);
}
