#include <stdio.h>
int main()
{
    unsigned int a,b;
    while(scanf("%u%u", &a, &b) != EOF)
    {
        unsigned int c = a ^ b;
        printf("%u\n",c);
    }
    return 0;
}