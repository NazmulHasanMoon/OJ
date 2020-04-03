#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100002
int a[sz],u[sz],l[sz];
int main()
{
    faster
    int n,mx(1),t(0),s(1);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
        return cout<<"1\n",0;
    t=1;
    u[0]=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            t++;
        else
            t=1;
        u[i]=t;
    }
    t=1;
    l[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
            t++;
        else
            t=1;
        l[i]=t;
    }
    /*for(int i=0;i<n;i++)
        cout<<u[i]<<'-'<<l[i]<<endl;*/
    for(int i=0;i<n;i++)
    {
        if(!i)
            mx=max(mx,max(l[i+1],u[i])+1);
        else if(i+1==n)
            mx=max(mx,max(l[i],u[i-1])+1);//cout<<l[i]<<' '<<u[i-1]<<'i'<<i<<endl;
        else
        {
            if(a[i+1]-a[i-1]>1)
                mx=max(mx,u[i-1]+l[i+1]+1);
            else if(a[i+1]<=a[i])
                mx=max(mx,max(u[i]+1,l[i+1]+1));
            else if(a[i]<=a[i-1])
                mx=max(mx,max(u[i-1]+1,l[i]+1));
            else
                mx=max(mx,max(u[i],l[i]));

        }
       // cout<<mx<<'\\';
    }
    cout<<mx<<'\n';
    return 0;
}
