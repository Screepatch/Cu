#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    double weight, height;
    
    printf("Enter weight KG: ");
    scanf("%lf", &weight);
    printf("Enter height METERS: ");
    scanf("%lf", &height);

    printf("Mass Index: %lf", weight / pow(height, 2));

   
    
    getchar();
    return 0;
}