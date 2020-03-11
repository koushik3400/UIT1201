#include <stdio.h>
#include <string.h>
int main()
{
	char l1[] = "I am learning C ";
	char l2[] = "after learning Python..\n";
    char bfr[50];
	strcpy(bfr,l1);
	strcat(bfr,l2);
    printf("%s", bfr);
	return(0);
}

