#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int>v,v2;
    int n,x,y,r,u,m;
    r=u=m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x!=y)
            r=1;
        if(!i)
            m=x;
        else{
            if(m<x)
                u=1;
            m=x;
        }
    }
    if(r)
        cout<<"rated\n";
    else if(u)
        cout<<"unrated\n";
    else
        cout<<"maybe\n";
    return 0;
}
