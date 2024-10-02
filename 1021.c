#include<stdio.h>
int main()
{
    float a,b,c;
    int N,X,P;
    scanf("%f",&a);
    N=(int)a;
    b=a-N;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",N/100);
    N=N%100;
    printf("%d nota(s) de R$ 50.00\n",N/50);
    N=N%50;
    printf("%d nota(s) de R$ 20.00\n",N/20);
    N=N%20;
    printf("%d nota(s) de R$ 10.00\n",N/10);
    N=N%10;
    printf("%d nota(s) de R$ 5.00\n",N/5);
    N=N%5;
    printf("%d nota(s) de R$ 2.00\n",N/2);
    N=N%2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",N);
    P=round(b*100);
    printf("%d moeda(s) de R$ 0.50\n",P/50);
    P=P%50;
    printf("%d moeda(s) de R$ 0.25\n",P/25);
    P=P%25;
    printf("%d moeda(s) de R$ 0.10\n",P/10);
    P=P%10;
    printf("%d moeda(s) de R$ 0.05\n",P/5);
    P=P%5;
    printf("%d moeda(s) de R$ 0.01\n",P/1);
    return 0;
}