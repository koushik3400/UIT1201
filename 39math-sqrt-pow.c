#include <stdio.h>
#include <math.h>
int main()
{

    float rs, rp, s,base, exp;
    puts("Enter three numbers: ");
    scanf("%f%f%f", &s,&base,&exp);
    rs = sqrtf(s);
    rp = powf(base, exp);
    printf("The square root of %f is: %f\n",s,rs);
    printf("%f power %f is: %f\n",base,exp,rp);
    return(0);
}