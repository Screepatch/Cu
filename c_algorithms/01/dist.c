#include <stdio.h>
#include <Math.h>
 
int main(int argc, char *argv[])
{
    double x1, x2, y1, y2;
    double dist;

    printf("imput first point x1 y1;");
    scanf("%lf-%lf", &x1, &y1);

    printf("imput second point x2 y2;");
    scanf("%lf-%lf", &x2, &y2);

    dist = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));

    printf("Distance: %lf", dist);

    getchar();
    
    return 0;
}
