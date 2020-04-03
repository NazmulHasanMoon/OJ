#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100000001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all( x)   x.begin(),x.end()

using namespace std;

/*----------------- Start Here ----------------*/

int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        ll mn,mx;
        if(n==0)
            cout<<"Impossible\n";
        else
        {
            if(m>=n)
                mn=n+(m-n);
            else
                mn=n;
            if(m>0)
                mx=n+(m-1);
            else
                mx=n;
            cout<<mn<<' '<<mx<<endl;
        }
    }
    return 0;
}
