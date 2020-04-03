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
#define faster ios_base::sync_with_stdio(0);cin.tie(false);cout.tie(false);
#define case(x) cout<<"Case "<<x<<": "

/// ASCII Vlaue....
/// A=65,Z=90,a=97,z=122,0=48,9=57
///#define INT_MAX 2147483647
///#define INT_MIN -2147483647


const int MOD=1000000007;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int>vi;
typedef vector<ll>vl;
typedef vector<string> vs;
typedef stack<int> si;
typedef stack<string> ss;
typedef queue<int> qi;
typedef queue<string> qs;
typedef pair<int,int> pii;
typedef pair<string,int>psi;
typedef map<int,int>mii;
typedef map<string,int>msi;
int a[10004],ln;
int GCD(int x,int y)
{
    if(y>x)
        return GCD(y,x);
    if(y==0)
        return x;
    else
        return GCD(y,x%y);
}
string mul(string x,int b)
{
    int carry=0;
    int l=x.size();
    for(int i=0;i<l;i++)
    {
        carry+=(x[i]-48)*b;
        x[i]=(carry%10+48);
        //cout<<x<<' '<<carry<<endl;
        carry/=10;
    }
    while(carry)
    {
        x.push_back(carry%10+48);
        carry/=10;
    }
    cout<<x<<'!';
    return x;
}
string div(string s,int gcd)
{
    reverse(s.begin(),s.end());
    int rm=0,y;
    string q;
    //ln=s.size();
    for(int i=0;s[i]!='\0';i++)
    {
        rm=rm*10+(s[i]-48);
        y=rm%gcd;
        if(!y)
            q.push_back((rm/gcd)+48);
        rm=y;
    }
    reverse(q.begin(),q.end());
    return q;
}
int main()
{
    int t,cs(1),n,x,gcd;
    sf("%d",&t);
    string s;
    char ch[50000];
    while(cs<=t)
    {
        sf("%d",&n);
        for(int i=0;i<n;i++)
            sf("%d",&a[i]);
        x=a[0];
        while(x!=0)
        {
            s.push_back((x%10)+48);
            x/=10;
        }
        if(n==1)
            pf("Case %d: %d\n",cs++,a[0]);
        else
        {
            gcd=a[0];
            for(int i=1;i<n;i++)
            {
                gcd=GCD(gcd,a[i]);
                s=mul(s,a[i]);
                //cout<<s<<' '<<gcd<<' ';//endl;
                s=div(s,gcd);
                //cout<<s<<endl;
            }
            ln=s.size();
            int k=ln-1;
            for(int i=0;i<ln;i++,k--)
                ch[i]=s[k];
            ch[ln]='\0';
            pf("Case %d: %s\n",cs++,ch);
        }
        s.clear();
    }
    return 0;
}
