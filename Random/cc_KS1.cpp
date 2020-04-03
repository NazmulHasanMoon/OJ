#include<bits/stdc++.h>
using namespace std;

#define loop(a,b,c)   for(int a=b;a<c;a++)
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define TC(t)         scanf("%d",&t);while(t--)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define sf scanf
#define pf printf
#define si(a) sf("%d",&a)
int main()
{
    int T,N,x,y,z,r,ans,zero;
    vector<int>v;
    while(T--)
    {
        si(N);
        x=r=ans=zero=0;
        loop(i,0,N)
        {
            si(y);
            z=x^y;
            r++;
            x=z;
            if(z==0)
                zero+=2;
        }
        if(v[0]==0)
            zero++;
        loop(i,1,r)
        {
            if(v[i]==0)
                zero++;
            if(v[i]==v[i-1])
                ans++;
        }
        pf("%d\n",(zero*2)+ans);
        v.clear();
    }

    return 0;
}
