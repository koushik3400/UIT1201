#include <stdio.h>

int main()
{
	char choice;

	printf("Your choice (X,Y,Z): ");
	scanf("%c",&choice);

	switch(choice)
	{
		case 'X':
        case 'x':
			puts("Century.");
			break;
		case 'Y':
        case 'y':
			puts("Half century.");
			break;
		case 'Z':
        case 'z':
			puts("Duck.");
			break;
		default:
			puts("Invalid choice.");
	}

	return(0);
}

