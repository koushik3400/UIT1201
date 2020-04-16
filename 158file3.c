#include <stdio.h>
int main()
{
    const char fn[] = "test.txt";
    FILE *handle;
    char fileBuff[100];
    handle = fopen(fn, "r");
    if (handle == NULL)
    {
        printf("Could not read from %s\n", fn);
        return(1);
    }
    printf("\"%s\" opened sucessfully in read mode.\n",fn);
    printf("Contents of\"%s\": \n",fn);
    while (fgets(fileBuff, 100, handle))
    {
        printf("%s",fileBuff);
    }
    putchar('\n');
    fclose(handle);
    return(0);
}