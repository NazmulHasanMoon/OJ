#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define ll long long
int h[500002];
void minheepy(int i,int t)
{
    int left=i*2;
    int right=2*i+1;
    int l;
    if(left<=t&&h[left]<h[i])l=left;
    else l=i;
    if(right<=t&&h[right]<h[l])l=right;
    if(l!=i)
    {
        h[i]^=h[l];
        h[l]^=h[i];
        h[i]^=h[l];
        minheepy(l,t);
    }
}
void heep(int t)
{
    for(int i=t/2;i>=1;i--)
        minheepy(i,t);
}
void sort(int t)
{
    for(int i=t;i>=2;i--)
    {
        h[i]^=h[1];
        h[1]^=h[i];
        h[i]^=h[1];
        minheepy(1,i-1);
    }
}
int main()
{
    int t;
    sf("%d",&t);
    for(int i=1;i<=t;i++)
        sf("%d",&h[i]);
    heep(t);
    sort(t);
    ll mx=h[1];
    ll n;
    for(int i=2;i<=t;)
    {
        int j=i+1;
       /// pf("%d ",h[i]);
        while(j<t&&h[j]==h[i])
            j++;
        n=(ll)h[i]*(j-1);
        if(mx<n)mx=n;///pf("%d %d\n",h[i],j);
        i=j;
    }
    pf("%lld\n",mx);
    return 0;
}
