#include <stdio.h>
int main()
{
    const char fn[] = "test2.txt";
    FILE *handle;
    handle = fopen(fn, "w");
    if (handle == NULL)
    {
        printf("Could not create %s\n", fn);
        return(1);
    }
    printf("\"%s\" opened sucessfully in write mode.\n",fn);
    fprintf(handle, "Hello World..\n");
    fclose(handle);
    return(0);
}