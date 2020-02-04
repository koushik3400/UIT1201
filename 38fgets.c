#include <stdio.h>

int main()
{
	char string[50];		

	printf("Enter a string: ");
	fgets(string,50,stdin);
	puts("You entered:");
	puts(string);

	return(0);
}

