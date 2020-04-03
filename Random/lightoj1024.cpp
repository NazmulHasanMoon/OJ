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
int p[5005],j;
bool x[10002];
map<int,int>mpp;
void sieve()
{
    int n=10000;
    int l=100;
    int i,k;
    p[j++]=2;
    mpp[j]=0;
    //mpp[2]=1;
    for(i=4; i<=n; i+=2)
        x[i]=1;//mpp[i]=0;

    for(i=3; i<=n; i+=2)
    {
        if(!x[i])
        {
            p[j++]=i;
            mpp[j]=0;
            //mpp[i]=1;
            //re[i]=2;
            if(i<=l)
            {
                for(k=i*i; k<=n; k+=i*2)
                    x[k]=1;//mpp[i]=0;
            }
        }
    }
}
string mul(string a,int b)
{
    int carry=0;
    int l=a.size();
    for(int i=0; i<l; i++)
    {
        carry+=(a[i]-48)*b;
        a[i]=(carry%10+48);
        carry/=10;
    }
    while(carry)
    {
        a.push_back(carry%10+48);
        carry/=10;
    }
    return a;
}
int main()
{
    sieve();
    int t,cs(1),n,a,mx,i,k,b;
    sf("%d",&t);
    string s;
    char ch[1000000];
    while(cs<=t)
    {
        sf("%d",&n);
        ///mx=0;
        for(i=0; i<n; i++)
        {
            sf("%d",&a);
            int ml;
            s="1";
            // mx=max(mx,a);
            for(k=0; p[k]*p[k]<=a; k++)
            {
                if(a%p[k]==0)
                {
                    ml=1;
                    while(a%p[k]==0)
                    {
                        ml=ml*p[k];
                        //cout<<a<<'-'<<ml<<endl;
                        a/=p[k];
                    }
                    mpp[p[k]]=max(mpp[p[k]],ml);
                }
            }
            if(a>1)
                mpp[a]=max(mpp[a],a);
        }
        //cout<<s<<endl;
        map<int,int>::iterator it=mpp.begin();
        for(; it!=mpp.end(); it++)
        {
            if((it->ss)>1)
                s=mul(s,it->ss),mpp[it->ff]=0;
        }
        int l=s.size();
        for(i=0,k=l-1; i<l; i++,k--)
            ch[i]=s[k];
        ch[l]='\0';
        pf("Case %d: %s\n",cs++,ch);
        ch[0]='\0';
        s.clear();
    }
    return 0;
}
