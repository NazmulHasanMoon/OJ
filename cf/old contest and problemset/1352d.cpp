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
#define SIZE 1001
#define sp ' '
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)

#define si(a) sf("%d",&a)
#define sl(a) sf("%I64d",&a)
#define sii(a,b) sf("%d%d",&a,&b)
#define Pi(a) pf("%d\n",a)
#define Pin(a) pf("%d ",a)
#define Pl(a) pf("%I64d\n",a)
#define pln(a) pf("%I64d ",a)
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define case(x) cout<<"Case "<<x<<": "
#define  ll long long
ll a[SIZE],l[SIZE],r[SIZE];
int main()
{
    faster
    ll t;
    cin>>t;
    string s;
    int n,mv;
    while(t--)
    {
        cin>>n;
        ll b,c,ap,bp;
        b=c=ap=bp=0;
        mv=0;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0,j=n-1; i<=j;)
        {
            if(ap<=bp&&i<=j)
            {
                while(ap<=bp&&i<=j)
                {
                    ap+=a[i];
                    b+=a[i++];
                }
                bp=0;
                mv++;
                ///cout<<ap<<"!!!";
            }
            if(bp<=ap&&i<=j)
            {
                while(bp<=ap&&i<=j)
                {
                    bp+=a[j];
                    c+=a[j--];
                }
                mv++;
                //cout<<bp<<"#\n";
            }
            ap=0;
        }
        cout<<mv<<' '<<b<<' '<<c<<'\n';
    }
    return 0;
}


