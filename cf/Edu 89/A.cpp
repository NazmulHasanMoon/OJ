#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,a,b,s,x,y;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>a>>b;
        if(a<b)
            swap(a,b);
        if(a>=2&&b>=1)
        {
            if(a>=b*2)
                s+=b;
            else
                s+=(a+b)/3;
        }
        cout<<s<<'\n';
    }
    return 0;
}

