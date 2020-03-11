#include <stdio.h>
#include <string.h>
int main(){
  char a[12]="Hello ";
  char b[12]="World"; 
  char c[12]="C"; 
  
  printf("a = \"%s\"\n",a);
  printf("b = \"%s\"\n",b);
  printf("c = \"%s\"\n",c);
  //concatenate a and b
  strncat(a,b,12);
  
  //copy a to c
  strncpy(c,a,12);
  
  printf("a = \"%s\"\n",a);
  printf("b = \"%s\"\n",b);
  printf("c = \"%s\"\n",c);

  return(0);
}