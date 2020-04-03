#include<stdio.h>
int main()
{
    int i,j,k,h[2000],s,m,n;
    i=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        else{
            s=0;
            for(j=0;j<n;j++)
            {
                scanf("%d",&h[j]);
                s+=h[j];
            }
            m=s/n;
            k=0;
            for(j=0;j<n;j++)
            {
                 if(h[j]>m)
                    k=k+(h[j]-m);

            }
        }
        printf("Set #%d\n",++i);
        printf("The minimum number of moves is %d.\n\n",k);
    }
    return 0;
}
