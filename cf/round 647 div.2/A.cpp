#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    ll a,b;
    while(t--)
    {
        int ans=0;
        cin>>a>>b;
        if(a>b)
            swap(a,b);
        if(a==b)
        {
            cout<<"0\n";
            continue;
        }
        for(int i=1; i<=63&&a<b; i++)
        {
            a<<=1;
            //cout<<a<<'!';
            ans++;
        }
        if(a==b)
        {
            int res=0;
            while(ans>0)
            {
                if(ans>=3)
                    ans-=3;
                else if(ans>=2)
                    ans-=2;
                else
                    ans--;
                res++;
            }
            cout<<res<<'\n';
        }
        else
            cout<<"-1\n";
    }
    return 0;
}
