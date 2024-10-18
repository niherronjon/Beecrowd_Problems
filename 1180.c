#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int X[N], a, b;
    for(int i=0;i<N;i++)
    {
        scanf("%d", &X[i]);
        if(i == 0 || X[i] < a)
        {
            a = X[i];
            b = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", a, b);
    return 0;
}