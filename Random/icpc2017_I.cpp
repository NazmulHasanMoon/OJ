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
/// ASCII Vlaue....
/// A=65,Z=90,a=97,z=122,0=48,9=57
///#define INT_MAX 2147483647
///#define INT_MIN -2147483647
int digitsum(string b)
{
    int u,v;
    u=0;
    for(int i=0; b[i]!='\0'; i++)
    {
        u+=(b[i]-'0');
        if(u>9)
        {
            v=u%10;
            u/=10;
            u+=v;
        }
    }
    return u;
}
int digitpow(string b,int v)
{
    int u;
    u=(b[0]-'0')%v;
    for(int i=1;b[i]!='\0';i++)
    {
        u=10*u+(b[i]-'0');
        u%=v;
    }
    return u;
}
int main()
{
    int t,cs(1);
    si(t);
    int x,y,z,p,q,r;
    string a,b;
    while(cs<=t)
    {

        a.clear();
        b.clear();
        cin>>a>>b;
        x=y=0;
        x=digitsum(a);
        y=digitsum(b);
        ///cout<<y<<endl;
    case(cs++);
        if(x==1||!y)
            pf("1\n");
        else if(!x)
            pf("0\n");
        else if(x==2)
        {
            y=digitpow(b,6);
            y=y%6;
            if(y==0)pf("1\n");
            else if(y==1)pf("2\n");
            else if(y==2)pf("4\n");
            else if(y==3)pf("8\n");
            else if(y==4)pf("7\n");
            else pf("5\n");
        }
        else if(x==5)
        {
            y=digitpow(b,6);
            y=y%6;
            if(y==0)pf("1\n");
            else if(y==1)pf("5\n");
            else if(y==2)pf("7\n");
            else if(y==3)pf("8\n");
            else if(y==4)pf("4\n");
            else pf("2\n");
        }
        else if(x==4)
        {
            y=digitpow(b,3);
            y=y%3;
            if(y==0)pf("1\n");
            else if(y==1)pf("4\n");
            else if(y==2)pf("7\n");
        }
        else if(x==7)
        {
            y=digitpow(b,3);
            y=y%3;
            if(y==0)pf("1\n");
            else if(y==1)pf("7\n");
            else if(y==2)pf("4\n");
        }
        else if(x==8)
        {
            y=digitpow(b,2);
            y=y%2;
            ///cout<<y<<endl;
            if(y&1)pf("8\n");
            else pf("1\n");
        }
        else if(x==3||x==6||x==9)
        {
            y=digitsum(b);
            if(y==1)Pi(x);
            else pf("9\n");
        }

    }
    return 0;
}
