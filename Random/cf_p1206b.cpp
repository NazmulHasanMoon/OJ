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
#define ll long long
int a[SIZE],neg,pos;
int main()
{
    faster
    int n;
    ll re(0);
    cin>>n;
    loop(i,0,n)
    {
        cin>>a[i];
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
    }
    if(pos==0)
    {
        loop(i,0,n)
            re+=abs(-(ll)a[i]-1LL);
        if(neg==n&&(neg&1))
            re+=2;

    }
    else if(neg==0)
    {
        loop(i,0,n)
        re+=abs((ll)a[i]-1LL);
    }
    else
    {
        loop(i,0,n)
        {
            if(a[i]>=0)
                re+=abs((ll)a[i]-1LL);
            else
                re+=-(ll)a[i]-1LL;
        }
        if(pos+neg==n)
        {
            if((pos&1)||(neg&1))
                re+=2;
        }
    }
    cout<<re<<endl;
    return 0;
}
