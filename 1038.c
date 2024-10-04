#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    double price;
    if(a == 1)
    {
        price = b*4.00;
        printf("Total: R$ %.2lf\n",price);
    }
    else if(a == 2)
    {
        price = b*4.50;
        printf("Total: R$ %.2lf\n",price);
    }
    else if(a == 3)
    {
        price = b*5.00;
        printf("Total: R$ %.2lf\n",price);
    }
    else if(a == 4)
    {
        price = b*2.00;
        printf("Total: R$ %.2lf\n",price);
    }
       else if(a == 5)
       {
        price=b*1.50;
        printf("Total: R$ %.2lf\n",price);
       }
    return 0;
}