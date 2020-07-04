#include <stdio.h>
#include <math.h>


int main(int argc, const char *argv[])
{
       
    double a, b, c;
    
    printf("Enter (a) var: ");
    scanf("%lf", &a);
    printf("Enter (b) var: ");
    scanf("%lf", &b);
    
    c = a;
    a = b;
    b = c;

    printf("Var changed. (a) = %lf, (b) =%lf", a, b);
    
    return 0;
}
