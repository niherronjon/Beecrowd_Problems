#include <stdio.h>
int main()
{
    int X;
    float Y;
    scanf("%d%f", &X, &Y);
    printf("%.3f km/l\n", (float)X / Y);
    return 0;
}