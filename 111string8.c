#include <stdio.h>
#include <string.h>
#include <stdint.h>
#define SIZE 200
typedef struct{
  int a;
  char b;
} abs;
int main() 
{
  abs x,y;
  uint8_t arr[SIZE];
  int i;
  i=SIZE;
  putchar('\n');
  while(i--) 
  {
    printf(" %i ",arr[i]);
  }
  printf("\n");
  puts("\n------------------");
  memset(arr,2,SIZE);
  i=SIZE;
  while(i--) 
  {
    printf(" %i ",arr[i]);
  }
  printf("\n");
  puts("\n------------------");
  x.a=50;
  x.b='A';
  printf("%i %i\n",x.a,x.b);
  printf("%i %i\n\n",y.a,y.b);
  memcpy(&y,&x,sizeof(abs));
  printf("%i %i\n",x.a,x.b);
  printf("%i %i\n\n",y.a,y.b);
}