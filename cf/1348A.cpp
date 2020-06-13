#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x=n/2;
        int y=1;
        long long p,q;
        p=q=0;
        for(int i=1;i<x;i++)
            p+=(long long)(y<<1),y<<=1;
        for(int i=x;i<n;i++)
            q+=(long long)(y<<1),y<<=1;
        p+=(long long)(y<<1);
        cout<<p-q<<endl;
    }
    return 0;
}
