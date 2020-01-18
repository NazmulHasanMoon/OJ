#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i=1,y;
    double k,x;
    while(scanf("%I64d %lf",&n,&k)!=EOF)
    {
        if(k>n)
            printf("%.lf\n",k);
        else
        {
            x=(n/k)+1;
            y=(int)x;
            if(x-y<.999999999)
                x=(floor(x))*k;
            else
                x=(ceil(x))*k;
            printf("%.lf\n",x);
        }
    }
    return 0;
}
