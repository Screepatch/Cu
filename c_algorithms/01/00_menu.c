#include <stdio.h>
#include <math.h>

void solution1();
void solution2();
void solution3();
void menu();

int main(int argc, const char* argv[] )
{
    int sel = 0;

    do
    {
        menu();
        scanf("%i", &sel);
        switch(sel)
        {
            case 1:
                solution1();
                break;
            case 2:
                solution2();
                break;    
            case 3:
                solution3();
                break;
            case 0:
                printf("Bye-Bye");
                break;
            default:
                printf("Wrong Selected\n");
        }
    } while(sel != 0);

    return 0;
}

void solution1()
{
    printf("Solution 1\n");
    double weight, height;
    
    printf("Enter weight KG: ");
    scanf("%lf", &weight);
    printf("Enter height METERS: ");
    scanf("%lf", &height);

    printf("Mass Index: %lf\n\n", weight / pow(height, 2));
}

void solution2()
{
    printf("Solution 2\n");
    double a, b, c, d;
    double maxNum;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);
    printf("Enter third number: ");
    scanf("%lf", &c);
    printf("Enter fourth number: ");
    scanf("%lf", &d);

    double max1 = (a > b) ? a : b;
    double max2 = (c > d) ? c : d;

    printf("Max Number is %lf\n\n", (max1 > max2) ? max1 : max2);
}

void solution3()
{
    printf("Solution 3\n\n");
    double a, b, c;
    
    printf("Enter (a) var: ");
    scanf("%lf", &a);
    printf("Enter (b) var: ");
    scanf("%lf", &b);
    
    c = a;
    a = b;
    b = c;

    printf("Var changed. (a) = %lf, (b) =%lf\n", a, b);
}

void menu()
{
    printf("1 - task #1\n");
    printf("2 - task #2\n");
    printf("3 - task #3\n");
    printf("0 - exit\n");
}