#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x, rn[10];
    srand((unsigned)time(NULL));
    for(x=0;x<5;x++) {
        rn[x]=rand()%20+1;
    }
    for(x=0;x<5;x++) {
        printf("%d\n",rn[x]);
    }
    return(0);
}