#include <stdio.h>
int main()
{
    // int i;
    // scanf("%d",&i);
    // printf("%d\n", i);

    // int i;
    // float j;
    // scanf("%d%f",&i, &j);
    // printf("%d %f\n", i,j);

    // char i[5];
    // int x;
    // scanf("%s",i);
    // printf("%s\n",i);
    
    char dept[25];		

	printf("Your department? ");
	scanf("%s",dept);
	printf("You belong to %s department.\n",dept);
    return(0);
}