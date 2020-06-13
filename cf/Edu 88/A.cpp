#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        int x=n/k;
        k--;
        if(m<x)
        {
            //cout<<m-x<<endl;
            cout<<m<<'\n';
            continue;
        }
        int y=x;
        m-=x;
        x=m/k;
        if(m%k)x++;
        cout<<y-x<<'\n';
    }
    return 0;
}
