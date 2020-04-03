#include<stdio.h>
int main()
{
    double n,x;
    unsigned long int i,j,k,l,m,A,B,C,D,E,F,G,x1,x2,x3,x4,x5,y1,y2,y3,y4,y5,a,b,c,d,e,f,g;
    while(scanf("%lf",&n)!=EOF)
    {
        A=(int)n/100;
        a=(int)n%100;
        B=a/50;
        b=a%50;
        C=b/20;
        c=b%20;
        D=c/10;
        d=c%10;
        e=d%5;
        E=d/5;
        F=e/2;
        f=e%2;
        G=f/1;
        g=f%1;
        x=(n-(int)n)*100;
        y1=(int)x/50;
        x1=(int)x%50;
        y2=x1/25;
        x2=x1%25;
        y3=x2/10;
        x3=x2%10;
        y4=x3/5;
        x4=x3%5;
        y5=x4/1;
        printf("NOTAS:\n%lu nota(s) de R$ 100.00\n%lu nota(s) de R$ 50.00\n%lu nota(s) de R$ 20.00\n%lu nota(s) de R$ 10.00\n%lu nota(s) de R$ 5.00\n%lu nota(s) de R$ 2.00\n",A,B,C,D,E,F);
        printf("MOEDAS:\n%lu moeda(s) de R$ 1.00\n%lu moeda(s) de R$ 0.50\n%lu moeda(s) de R$ 0.25\n%lu moeda(s) de R$ 0.10\n%lu moeda(s) de R$ 0.05\n%lu moeda(s) de R$ 0.01\n",G,y1,y2,y3,y4,y5);
    }
    return 0;
}

