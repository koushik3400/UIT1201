#include <stdio.h>
int main()
{
    const char fn[] = "test2.txt";
    FILE *handle;
    int i;
    handle = fopen(fn, "w");
    if (handle == NULL)
    {
        printf("Could not create %s\n", fn);
        return(1);
    }
    printf("\"%s\" opened sucessfully in write mode.\n",fn);
    for (i = 'a'; i <= 'z'; i++)
    {
        fputc(i,handle);
        fputc(' ', handle);
    }
    
    
    fclose(handle);
    return(0);
}