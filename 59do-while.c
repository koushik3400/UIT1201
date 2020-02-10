#include <stdio.h>

int main()
{
	int x;

	printf("Enter an integer: ");
	scanf("%d",&x);

	do
	{
		printf("%d ",x);
		x--;
	}
	while(x >= 10);
    printf("\n");

	return(0);
}

