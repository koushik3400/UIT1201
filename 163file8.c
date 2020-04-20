#include <stdio.h>
int main()
{
    const char fn[] = "test3.dat";
    FILE *handle;
    int i,x;
    handle = fopen(fn, "r");
    if (handle == NULL)
    {
        printf("Could not create %s\n", fn);
        return(1);
    }
    for (i=5;i>0;i--)
    {
        fread(&x,sizeof(int), 1, handle);
        printf("%d\n", x);
    }
    fclose(handle);
    return(0);
}