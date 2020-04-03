#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define sz 100005
int a[sz];
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n,k;
        int b[n];
        scanf("%d %d",&n,&k);
        long long mx(0),sum(0);
        int l,m,x,p;
        l=m=x=p=0;
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            if(a[j]<0)
                l++;
            else
                sum+=a[j];
            if((j>0&&a[j]>=0&&a[j-1]<0)||(j==0&&a[j]>=0))
                b[p++]=j;
            //cout<<sum<<endl;
            if(l==k+1)
            {

                if(mx<sum)
                    mx=sum;
                sum=sum-a[b[x]];
                x++;
                //cout<<mx<<endl;
                //cout<<j<<' '<<mx<<endl;
                l--;
            }

            //cout<<sum<<endl;
        }
        if(!l)
            printf("Case %d: %lld\n",i,sum);
        else
        {

            if(mx<sum)
                mx=sum;
            printf("Case %d: %lld\n",i,mx);
        }
    }
    return 0;
}
