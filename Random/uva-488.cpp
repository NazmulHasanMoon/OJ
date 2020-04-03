#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a,b,i,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        while(b--)
        {
            for(i=1; i<=a; i++)
            {
                for(k=1; k<=i; k++)
                    cout<<i;
                cout<<'\n';
            }
            for(i=a-1;i>=1;i--)
            {
                for(k=1;k<=i;k++)
                    cout<<i;
                cout<<'\n';
            }
            if(b)
                cout<<'\n';
        }
        if(t)
            cout<<'\n';
    }
    return 0;
}
