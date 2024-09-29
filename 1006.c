#include <stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf%lf%lf", &A,&B,&C);
    double avg = (A*2+B*3+C*5)/(2+3+5);
    printf("MEDIA = %.1lf\n", avg);
    return 0;
}