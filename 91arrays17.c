#include <stdio.h>
int main()
{
	int i,marks[4];
    puts("Enter marks: ");
    for(i=0;i<4;i++)
    {
        scanf("%d",&marks[i]);
    }
	int t;
	t = marks[2];
	marks[2] = marks[3];
	marks[3] = t;
	puts("Updated marks:");
	for(i=0;i<4;i++)
    {
		printf("%d\n",marks[i]);
    }
	return(0);
}
