#include<stdio.h>
#define sz 1000
int a[sz];
int main()
{
    int i,j,k,l,n,m,x,y,s;
    while(scanf("%d %d %d",&n,&m,&k)!=EOF)
    {
        x=0;
        y=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==1)
            {
                if(m==0)
                    x++;
                else
                    m--;
            }
            else if(a[i]==2)
            {
                if(k!=0){
                    k--;
                    continue;
                }
                if(m!=0){
                    m--;
                    continue;
                }
                else
                    x++;

            }
        }
        printf("%d\n",x);
    }
    return 0;
}
