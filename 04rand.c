#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int x = 10;
    int a,b[x];
    srand((unsigned)time(NULL));
    for(a=0;a<x;a++)
    {
        b[a] = rand()%20 + 1;
    }
    for(a=0;a<x;a++)
    {
        printf("%d\n",b[a]);
    }
    return(0);
}
