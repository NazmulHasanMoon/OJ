#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define sz 10002
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,a,b,x,y,h,l,i(1);
    cin>>t;
    while(i<=t)
    {
        cin>>n;
        cin>>a;
        if(n==1)
            cout<<"Case "<<i++<<": 0 0\n";
        else
        {
            b=a;
            h=l=0;
            for(int j=1; j<n; j++)
            {
                cin>>a;
                if(a<b)
                    l++;
                else if(a>b)
                    h++;
                b=a;
            }
            cout<<"Case "<<i++<<": "<<h<<' '<<l<<"\n";
        }
    }
    return 0;
}
