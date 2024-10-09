#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    if(X % 2 == 0)
    {
        X++;
    }
    printf("%d\n", X);
    printf("%d\n", X + 2);
    printf("%d\n", X + 4);
    printf("%d\n", X + 6);
    printf("%d\n", X + 8);
    printf("%d\n", X + 10);
    return 0;
}