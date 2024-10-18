#include <stdio.h>
#include <string.h>
int main()
{
    int a,b;
    char name[10000];
    scanf("%d",&a);
    while(a--)
    {
        scanf("%s", name);
        b = strlen(name);
        printf("%.2lf\n", b*.01);
    }
    return 0;
}