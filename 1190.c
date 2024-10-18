#include <stdio.h>
int main()
{
    double N[12][12];
    char p;
    double d = 0.0;
    scanf(" %c", &p);
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            scanf("%lf", &N[i][j]);
            if(j > (11 - i) && j > i)
            {
                d += N[i][j];
            }
        }
    }
    
    if(p == 'S')
    {
        printf("%.1f\n", d);
    }
    else
    {
        printf("%.1f\n", d / 30.0);
    }
    return 0;
}