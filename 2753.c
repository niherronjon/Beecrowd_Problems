#include <stdio.h>
int main()
{
    int a = 97;
    for(int i = 0; i < 26; i++)
    {
        int b = a + i;
        printf("%d e %c\n",b,b);
    }
    return 0;
}