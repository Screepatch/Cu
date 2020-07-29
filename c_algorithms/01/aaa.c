#include <stdio.h>
#include <Math.h>
 
double Distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}


int main(int argc, char *argv[])
{
    double x1, x2, y1, y2, x3, y3;
    double dist1, dist2, dist3; 

    printf("imput first point x1 y1;");
    scanf("%lf-%lf", &x1, &y1);

    printf("imput second point x2 y2;");
    scanf("%lf-%lf", &x2, &y2);

    printf("imput second point x3 y3;");
    scanf("%lf-%lf", &x3, &y3);

    dist1 = Distance(x1,y1,x2,y2);
    dist2 = Distance(x1,y1,x3,y3);
    dist3 = Distance(x2,y2,x3,y3);

    

    printf("Triangle perimetr: %lf", dist1+dist2+dist3);

    getchar();
    
    return 0;
}
