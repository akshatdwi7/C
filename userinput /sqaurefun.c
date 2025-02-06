#include <stdio.h>

double sqaure(double x)
{

    return x * x;
}

int main()
{
    double x = 90;
    printf("Square of %0.1f is %0.2f\n", x, sqaure(x));
    return 0;
}