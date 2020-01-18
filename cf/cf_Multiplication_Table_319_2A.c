#include<stdio.h>
#include<math.h>
int main()
{
    long int i,j,k,x,s;
    double y,n;
    while(scanf("%lf %ld",&n,&x)!=EOF)
    {
        s=0;
        if(x==1)
        {
            printf("%d\n",x);
        }
        else{
            y=ceil(x/n);
            i=(int)y;
            for(j=(int)y;j<=n;j++)
            {
                if(x%j==0)
                    s++;
            }
            printf("%d\n",s);
        }

    }
    return 0;
}
