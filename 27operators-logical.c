//https://www.geeksforgeeks.org/operators-in-c-set-2-relational-and-logical-operators/
#include <stdio.h> 
  
int main() 
{ 
    int a = 20, b = 14, c = 20, d = 22; 
  
    // logical operators 
  
    // logical AND example 
    if (a > b && c == d) 
        printf("a is greater than b AND c is equal to d\n"); 
    else
        printf("AND condition not satisfied\n"); 
  
    // logical OR example 
    if (a > b || c == d) 
        printf("a is greater than b OR c is equal to d\n"); 
    else
        printf("Neither a is greater than b nor c is equal "
               " to d\n"); 
  
    // logical NOT example 
    if (!a) 
        printf("a is zero\n"); 
    else
        printf("a is not zero\n"); 
  
    return 0; 
} 