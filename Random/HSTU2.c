#include<stdio.h>
int main()
{
    int C,N,A,G[1000],i=1,j=1;
    scanf("%d",&C);
    double P;
    char ch='%';
    for(j=1;j<=C;j++)
    {
        int T=0,gta=0;
        scanf("%d",&N);
        for(i=1;i<=N&&1<=N&&N<=1000;i++)
        {
            scanf("%d",&G[i]);
            T=T+G[i];
            A=T/N;
        }
        for(i=1;i<=N;i++)
        {
            if(G[i]>A)
                gta=gta+1;
            P=(gta*100.0)/N;
        }
        printf("%.3lf%c\n",P,ch);
    }
    return 0;
}
