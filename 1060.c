#include <stdio.h>
int main()
{
    float a, b, c, d, e, f;
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
    int posCount = 0;
    if(a >= 0) posCount++;
    if(b >= 0) posCount++;
    if(c >= 0) posCount++;
    if(d >= 0) posCount++;
    if(e >= 0) posCount++;
    if(f >= 0) posCount++;
    printf("%d valores positivos\n", posCount);
    return 0;
}