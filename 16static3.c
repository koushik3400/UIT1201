#include<stdio.h> 
int fn() 
{ 
  static int x = 10; 
  x++; 
  return x; 
} 
   
int main() 
{ 
  printf("%d\n", fn()); 
  printf("%d\n", fn()); 
  return(0); 
}