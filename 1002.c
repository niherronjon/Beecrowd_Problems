#include <stdio.h>
int main()
{
    double R, A;
    double pi = 3.14159;
    scanf("%lf", &R);
    A = pi * R * R;
    printf("A=%.4lf\n", A);
    return 0;
}