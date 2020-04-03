#include<bits/stdc++.h>
using namespace std;

#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define rloop(a,b,c)  for(int a=c-1;a>=b;a--)
#define rlloop(a,b,c) for(long long a=c-1;a>=b;a--)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define TC(t)         scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define SIZE 100001
#define sp ' '
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define ll long long
int p[40]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
int power(int x,int y)
{
    int w=x;
    while(--y)
        w*=x;
    return w;
}
int main()
{
    int t,x,i(1);
    sf("%d",&t);
    while(i<=t)
    {
        sf("%d",&x);
        pf("Case %d: %d = ",i++,x);
        for(int k=0; p[k]<=x&&p[k]<=97; k++)
        {
            int s(0),l(1),w;
            bool ck=true;
            while(ck)
            {
                w=power(p[k],l);
                if(w>x)
                    ck=false;
                else
                    s+=(x/w);
                l++;
            }
            pf("%d (%d)",p[k],s);
            if(p[k+1]<=x)
                pf(" * ");
            else
                pf("\n");
        }
    }
    return 0;
}
