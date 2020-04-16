#include <stdio.h>
int main()
{
    const char fn[] = "test2.txt";
    FILE *handle;
    int i;
    handle = fopen(fn, "a");
    if (handle == NULL)
    {
        printf("Could not create %s\n", fn);
        return(1);
    }
    printf("\"%s\" opened sucessfully in write mode.\n",fn);
    fputc('\n', handle);
    fputs("Hello World", handle);
    fclose(handle);
    return(0);
}