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
#define SIZE 1000002
#define sp ' '
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define ll long long
int mpp[1000002];
void divisor()
{
    int n=1000000;
    int i,j;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
            mpp[j]+=i;
    }
}
void mini(int x,int y)
{
    double z,mn=(mpp[y]-y)/((double)y*1.00);
    int re=y;
    for(int i=y-1;i>=x;i--)
    {
        z=(mpp[i]-i)/((double)i*1.0);
        if(mn>z)
        {
            mn=z;
            re=i;
        }
    }
    pf("%d\n",re);
}
int main()
{
    int i,j;
    divisor();
    sf("%d %d",&i,&j);
    mini(i,j);
    return 0;
}
