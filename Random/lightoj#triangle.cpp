#include<bits/stdc++.h>
using namespace std;
#define sz 2002
#define sf scanf
#define pf printf
vector<int>v;
int main()
{
    int t,n,k(1),ans,a;
    sf("%d",&t);
    while(k<=t)
    {
        sf("%d",&n);
        ans=0;
        for(int i=0;i<n;i++)
            sf("%d",&a),v.push_back(a);
        sort(v.begin(),v.end());
        vector<int>::iterator u;
        for(int i=n-1;i>=2;i--)
        {
            for(int j=0;j<i;j++)
            {
                int z=(v[i]-v[j]);
                cout<<z<<endl;
                u=lower_bound(v.begin(),v.end(),z);
                cout<<*u<<' ';
                int x=u-v.begin();
                cout<<x<<endl;
                if(*u>(v[i]-v[j]))
                    ans++;
            }
        }
        pf("%d*\n",ans);
        k++;
    }
    return 0;
}
