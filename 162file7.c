#include <stdio.h>
int main()
{
    const char fn[] = "test3.dat";
    FILE *handle;
    int i,x;
    handle = fopen(fn, "w");
    if (handle == NULL)
    {
        printf("Could not create %s\n", fn);
        return(1);
    }
    x = 100; 
    for (i=5; i>0; i--)
    {
        fwrite(&x,sizeof(int), 1, handle);
        x -= 20;
    }
    fclose(handle);
    return(0);
}