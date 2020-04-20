#include <stdio.h>
int main()
{
    const char fn[] = "test3.dat";
    FILE *handle;
    int i,x[5];
    handle = fopen(fn, "r");
    if (handle == NULL)
    {
        printf("Could not create %s\n", fn);
        return(1);
    }
    fread(&x,sizeof(int), 5, handle);
    for (i=0;i<5;i++)
    {
        printf("%d\n", x[i]);
    }
    fclose(handle);
    return(0);
}