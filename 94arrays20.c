#include <stdio.h>

int main()
{
	int table[4][3];
	int i;
	for(i=0;i<4;i++)
	{
		table[i][0] = i+1;
		table[i][1] = table[i][0] * 10;
        table[i][2] = table[i][1] * 10;
	}
	for(i=0;i<4;i++)
    {
		printf("%d %d %d \n",table[i][0],table[i][1],table[i][2]);
    }
	return(0);
}