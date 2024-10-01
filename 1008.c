#include <stdio.h>
int main()
{
    int employeeNum,workedHours;
    float hourlyRate,salary;
    scanf("%d %d",&employeeNum,&workedHours);
    scanf("%f", &hourlyRate);
    salary = workedHours*hourlyRate;
    printf("NUMBER = %d\n", employeeNum);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}