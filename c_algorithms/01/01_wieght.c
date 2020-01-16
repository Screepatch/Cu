#include <stdio.h>
#include <math.h>

double humanParam(double weight, double height)
{
    return weight / (height * height);
}


int main(int argc, const char *argv[])
{
    double weight, height;
    
    printf("Enter weight: ");
    scanf("%lf", weight);
    printf("Enter height: ");
    scanf("%lf", height);

   
    
    getchar();
    return 0;
}