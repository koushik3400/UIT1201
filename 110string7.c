#include <stdio.h>
#include <string.h>

//Compare s1 and s2
void cmp(char *s1, char*s2)
{  
  int result;
  result = strncmp(s1,s2,200);
  printf("\"%s\" is ",s1);
  if(result == 0 ) 
  {
      printf("equal to ");

  }
  else if(result < 0 ) 
  {
      printf("less than ");

  }
  else
  {
      printf("greater than ");

  }
 printf("\"%s\" \n",s2);
    
}

int main()
{
  char a[200]="Coding in C is tricky";
  char b[200]="Coding in Python is tricky";
  char c[200]="Coding in Ruby is tricky";
  char d[200]="Coding in Scala is tricky";
  char e[200]="Coding in C is tricky";
  cmp(a,b);
  cmp(b,a);
  cmp(b,c);
  cmp(a,d);
  cmp(a,e);
  
  char lookup[]="Java";
  // Lookup "Python" in var. b
 //  Lookup "Ruby" in var. b
  char *result = strstr(b, lookup);
  if(result != NULL)
  {
    printf("\"%s\" found at position: %ld within \"%s\"\n", lookup, result-b, b);
  }
  else
  {
      printf("\"%s\" not found within \"%s\"\n", lookup, b);
  }
  return(0);
}