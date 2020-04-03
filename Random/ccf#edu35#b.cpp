#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all(x)   x.begin(),x.end()

using namespace std;
int main()
{
    int n,x,y,a,b,mn=INT_MAX,mx=-2;
    sf("%d %d %d",&n,&a,&b);
    vector<int>v;
    mn=min(mn,min(a,b));
    mx=max(mx,max(a,b));
    for(int i=mn;i>=1;i--)
    {
        x=(mn/i)+(mx/i);
        if(x>=n)
        {
            cout<<i<<endl;
            return 0;
        }
    }

    return 0;
}
