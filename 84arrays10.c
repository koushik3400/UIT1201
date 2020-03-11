#include <stdio.h>

int main()
{
	char color[3][6] = {
		"Red",
		"Green",
		"Blue"
	};
	int i;
    

	for(i=0;i<3;i++)
    {
		printf("%s\n",color[i]);
    }

    color[2][0] = 'G';

    puts("*****");

    for(i=0;i<3;i++)
    {
		printf("%s\n",color[i]);
    }



	return(0);
}

