#include <stdio.h>
#include <math.h>
int main()
{
    double A,B,C,delta,R1,R2;
    scanf("%lf%lf%lf",&A,&B,&C);
    delta = B * B - 4 * A * C;
    if (A == 0 || delta < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }
    return 0;
}