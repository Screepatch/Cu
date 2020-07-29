#include <stdio.h>
#include <math.h>



int main(int argc, const char *argv[])
{
    double a, b, c, d;
    double maxNum;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter first number: ");
    scanf("%lf", &b);
    printf("Enter first number: ");
    scanf("%lf", &c);
    printf("Enter first number: ");
    scanf("%lf", &d);

    double max1 = (a > b) ? a : b;
    double max2 = (c > d) ? c : d;

    printf("Max Number is %lf", (max1 > max2) ? max1 : max2);


    return 0;
}