#include <stdio.h>
int main()
{
    char sellerName[100];
    double fixedSalary,totalSales,totalSalary;
    scanf("%s%lf%lf",&sellerName,&fixedSalary,&totalSales);
    totalSalary = fixedSalary+(totalSales*0.15);
    printf("TOTAL = R$ %.2lf\n", totalSalary);
    return 0;
}