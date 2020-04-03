#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,a[52],y,z;
    double re;
    while(cin>>t)
    {
        y=z=0;
        if(!t)
            break;
        for(int i=0;i<t;i++)
            cin>>a[i];
        for(int i=0;i<t;i++)
        {
            for(int j=i+1;j<t;j++)
            {
                int x=__gcd(a[i],a[j]);
                y++;
                if(x==1)
                    z++;
            }
        }
        if(z==0)
            cout<<"No estimate for this data set.\n";
        else
            re=sqrt((6.0*y)/z),cout<<setprecision(6)<<fixed<<re<<'\n';
    }
    return 0;
}
