#include<stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    int c,d,i;
    scanf("%d",&d);
    printf("%d %d",a,b);
    for(i=1; i<d-1; i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}