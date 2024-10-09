#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N > 5 && N < 2000)
    {
        for(int i = 2; i <= N; i += 2)
        {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
    else
    {
        printf("Enter a value for N between 5 and 2000.\n");
    }
    return 0;
}