#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,p,q,r;
    cin>>a>>b>>c>>x;
    bool t=false;
    if(a==x||b==x||x+x<c||c+c<x)
        {
            cout<<"-1\n";
            return 0;
        }
    if(x<=c+c)
    {
        c=max(x,c);
        if(b+x<=c)
        {
            cout<<"-1\n";
            return 0;
        }
        b=b+x;
        //b=max(b,c+c+1);
        if(a+x<=b)
        {
            cout<<"-1\n";
            return 0;
        }
        a=a+x;
        //a=max(a,b+b+1)
        if(a==b||b==c||a==c)
        {
            cout<<"-1\n";
            return 0;
        }
        cout<<a<<endl<<b<<endl<<c<<endl;

    }
    else
        cout<<"-1\n";
    return 0;
}
