#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf
#define sz 200002
int a[sz];
int main()
{
    int t,n,k,i,x,l,mx,pos,z,ans;
    sf("%d",&t);
    while(t--)
    {
        sf("%d %d",&n,&k);
        for(i=1; i<=n; i++)
            sf("%d",&a[i]);
        x=n-k+1;
        mx=-1;
        pos=0;
        l=0;
        z=1;
        ans=0;
        int j,prev;
        for(j=2; j<k&&j<n; j++)
        {
            if(a[j]>a[j-1]&&a[j]>a[j+1])
                pos++;
        }
        mx=pos;
        ans=1;
        prev=2;
        for(i=j; i<n; i++)
        {
            //pf("%d!!",i);
            //prev=j-k+1;
            z++;
            if(a[prev]>a[prev-1]&&a[prev]>a[prev+1])
                pos--;
            if(a[i]>a[i-1]&&a[i]>a[i+1]){
                pos++;
                //pf("%d||!!#\n",i);
                if(mx<pos)
                {
                    mx=pos;
                    ans=z;
                }
            }
            prev++;
        }
        pf("%d %d\n",mx+1,ans);
    }
    return 0;
}
