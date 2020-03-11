#include <stdio.h>

int main()
{
	int marks[4], i;

	for(i=0;i<4;i++)
	{
		printf("Please enter marks for student %d: ",i+1);
		scanf("%d",&marks[i]);
	}
   
    puts("**************");
	puts("The marks are:");
	for(i=0;i<4;i++)
		printf("Student%d %d\n",i+1,marks[i]);

	return(0);
}

