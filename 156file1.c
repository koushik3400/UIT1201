#include <stdio.h>
int main()
{
    const char fn[] = "test.txt";
    FILE *handle;
    handle = fopen(fn, "r");
    if (handle == NULL)
    {
        printf("Could not read from %s\n", fn);
        return(1);
    }
    printf("\"%s\" opened sucessfully in read mode.\n",fn);
    fclose(handle);
    return(0);
}