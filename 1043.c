#include <stdio.h>
int main()
{
    float a,b,c,x,y;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(b+c)>a &&(c+a)>b)
    {
    x=a+b+c;
    printf("Perimetro = %.1f\n",x);
   } 
   else
   {
        y=((a+b)*c)/2;
        printf("Area = %.1f\n",y);
    }
    return 0;
}