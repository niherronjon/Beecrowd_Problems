#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N >= 10000)
    {
        printf("Invalid input. N less than 10000.\n");
        return 1;
    }
    for(int i = 1; i <= 10000; i++)
    {
        if(i % N == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}