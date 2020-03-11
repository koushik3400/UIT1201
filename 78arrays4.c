#include <stdio.h>

#define MARKS 3

int main()
{
	int subject[MARKS];
	int i,score;

	score = 0;				

	for(i=0;i<MARKS;i++)
	{
		printf("Marks for subject%d: ",i+1);
		scanf("%d",&subject[i]);
		score += subject[i];
	}
	printf("Your score is %d.\n",score);

	return(0);
}

