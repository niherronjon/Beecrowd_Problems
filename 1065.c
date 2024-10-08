#include <stdio.h>
int main()
{
    int i,a,b=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
          b++;
        }
    }
    printf("%d valores pares\n",b);
    return 0;
}