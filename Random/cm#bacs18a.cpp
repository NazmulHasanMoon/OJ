#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int main()
{
    //faster
    int t,n,x,y,i(1);
    sf("%d",&t);
    while(i<=t)
    {
        sf("%d %d",&n,&x);
        bool check=false;
        for(int j=1;j<n;j++)
        {
            sf("%d",&y);
            if(y-x==1)
                check=true;
            x=y;
        }
        if(check)
            pf("Case %d: Yes\n",i);
        else
            pf("Case %d: No\n",i);
        i++;
    }
    return 0;
}

