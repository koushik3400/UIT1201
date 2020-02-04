#include <stdio.h>
int main()
{
    int i;
    // printf("Hexa\tOcta\tDeci");
    for(i=0x1;i<0xb;i++)
    {
        printf("\n0x%x\t0%o\t%d\n",i,i,i);
    }
    return(0);
}