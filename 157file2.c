#include <stdio.h>
int main()
{
    const char fn[] = "test.txt";
    FILE *handle;
    int chInFile;
    handle = fopen(fn, "r");
    if (handle == NULL)
    {
        printf("Could not read from %s\n", fn);
        return(1);
    }
    printf("\"%s\" opened sucessfully in read mode.\n",fn);
    printf("Contents of\"%s\": \n",fn);
    while (1)
    {
        chInFile = fgetc(handle);
        if (chInFile != EOF)
        {
            putchar(chInFile);
        }
        else
        {
            break;
        }
    }
    putchar('\n');
    fclose(handle);
    return(0);
}