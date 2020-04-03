#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    int n,x,y1,y2,p,q;
    cin>>n;
    bool ck;
    while(n--)
    {
        ck=true;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>y1>>y2;
            if(i==0)
                q=abs(y1-y2);
            p=abs(y1-y2);
            if(p!=q)
                ck=false;
        }
        if(ck)
            cout<<"yes\n";
        else
            cout<<"no\n";
        if(n)
            cout<<'\n';
    }
    return 0;
}
