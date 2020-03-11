#include <stdio.h>
#include <string.h>
#define  LEN 80
int main()
{
    char input[LEN];
    int input_len,i,j,t;
    printf("Enter a text: ");
    fgets(input,LEN,stdin);
    input_len=strlen(input);
    for(i=0;i<input_len;i++)
    {
        for(j=i+1;j<input_len;j++)
        {
            if(input[i]>input[j])
            {
            t=input[i];
            input[i]=input[j];
            input[j]=t;
            }
        }
    }
    printf("%s\n",input);
    return(0);
}