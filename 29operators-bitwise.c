//https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
#include <stdio.h> 
int main() 
{ 
    // a = 5(00000101), b = 9(00001001) 
    unsigned char a = 5, b = 9; 
  
    // The result is 00000001 
    printf("a = %d, b = %d\n", a, b); 
    printf("a&b = %d\n", a & b); 
  
    // The result is 00001101 
    printf("a|b = %d\n", a | b); 
  
    // The result is 00001100 
    printf("a^b = %d\n", a ^ b); 
  
    // The result is 11111010 
    printf("~a = %d\n", a = ~a); 
  
    // The result is 00010010 
    printf("b<<1 = %d\n", b << 1); 
  
    // The result is 00000100 
    printf("b>>1 = %d\n", b >> 1); 

    int x = 20; 
    printf("x << 1 = %d\n", x << 1); 
    printf("x >> 1 = %d\n", x >> 1);
    (x & 1) ? printf("Odd\n") : printf("Even\n");  
  
    return 0; 
} 