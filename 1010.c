#include <stdio.h>
int main()
{
    int A,E,B,F;
    float C,D,Total;
    scanf("%d%d%f%d%d%f",&A,&E,&C,&B,&F,&D);
    Total = (E * C) + (F * D);
    printf("VALOR A PAGAR: R$ %.2f\n",Total);
    return 0;
}