#include <stdio.h>

int main()
{
	int choice;

	printf("Valid choices: 100, 200, 300: ");
	scanf("%d",&choice);

	if( choice == 100 || choice == 200 || choice == 300)
	{
		printf("Valid..You entered %d.\n",choice);
	}
	else
	{
		printf("Invalid ..You entered %d.\n",choice);
	}
	return(0);
}
