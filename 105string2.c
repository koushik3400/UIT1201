#include <stdio.h>
#include <string.h>

int main()
{
	char string[80];		
	int size;
	fgets(string,80,stdin);
	size = strlen(string);
	printf("You entered %d characters.\n",size);
	return(0);
}