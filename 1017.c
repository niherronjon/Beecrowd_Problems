#include <stdio.h>
int main()
{
    int time,speed;
    scanf("%d%d",&time,&speed);
    double dis = time * speed;
    double fuel = dis / 12.0;
    printf("%.3lf\n", fuel);
    return 0;
}