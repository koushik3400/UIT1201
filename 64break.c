#include <stdio.h>

int main()
{
	int x,y;

	printf("Enter a positive number: ");
	scanf("%d",&y);
	for(x=1;x<=y;x++)
	{
		printf("%d ",x);
		if(x==5)
			break;
	}
	putchar('\n');
	return(0);
}

