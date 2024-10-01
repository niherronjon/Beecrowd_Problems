#include <stdio.h>
#include <math.h>
int main()
{
    double x1,y1,x2,y2;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    double dis = hypot(x2 - x1, y2 - y1);
    printf("%.4lf\n", dis);
    return 0;
}