#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,x,y,a,b;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        b=(x-y)/2;
        a=x-b;
       // cout<<a<<' '<<b<<endl;
        if(a>=0&&b>=0&&a-b==y&&a+b==x)
            cout<<a<<' '<<b<<'\n';
        else
            cout<<"impossible\n";
    }
    return 0;
}
