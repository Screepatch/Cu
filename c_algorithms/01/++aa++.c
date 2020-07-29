#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 10;
    a = ++a + a++;

    printf("%d", a);
    
    getchar();
    return 0;
}