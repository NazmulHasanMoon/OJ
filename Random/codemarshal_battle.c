#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    double N,A,ar;
    while(scanf("%d",&T)!=EOF)
    {
        for(i=0;i<T;i++)
        {
            scanf("%lf",&N);
            ar=pow((N/2),2)*acos(-1);
            A=pow(N,2)-ar;
            printf("%.2lf\n",A);
        }
    }
    return 0;
}
