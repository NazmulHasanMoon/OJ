#include<bits/stdc++.h>
#define sz 105
using namespace std;
int a[sz],x[sz],y[sz];
int main()
{
    int l,i,j,k,n,s=0;
    scanf("%d",&n);
        for(j=0,i=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==0){
                s++;
                if(j>0&&a[j-1]!=0||j==0)
                    l=j+1;
            }
            else
            {
                x[i]=j+1;
                y[i]=j+1;
                if(j>0&&a[j-1]==0)
                    x[i]=l;
                i++;
            }
        }
        if(a[n-1]==0)
        {
            y[i-1]=j;
        }
        if(s==n)
            printf("NO\n");
        else
        {
            printf("YES\n%d\n",n-s);
            for(j=0;j<i;j++)
            {
                printf("%d %d\n",x[j],y[j]);
            }
        }
    return 0;
}
