#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d:%01d:%01d\n", N/3600, (N%3600) / 60, N%60);
    return 0;
}