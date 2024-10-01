#include <stdio.h>
int main()
{
    double a,b;
    const double pi = 3.14159;
    scanf("%lf",&a);
    b = (4.0 / 3.0) * pi * (a * a * a);
    printf("VOLUME = %.3lf\n",b);
    return 0;
}