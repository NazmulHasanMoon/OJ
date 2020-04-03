/*************************************************************************************
                         ---------------------------
                   ------Bismillahir-Rahmanir-Rahim------
                         ---------------------------
            //     //   Name: MD: NAZMUL HASAN              //     //
           //     //    Institute: HSTU                    //     //
          //     //     Dept.: CSE                        //     //
        //     //      Email: nazmulmoon123@gmail.com   //     //
    -----------------------------------------------------------------------
            ---------- I Love Programming as Gaming ----------
**************************************************************************************/
#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;


template <typename T>
using ordered_set = tree<T, null_type, less<T>,
      rb_tree_tag, tree_order_statistics_node_update>;
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
#define SIZE 200001
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
///      direction
/*int x4[]= {1,-1,0,0};
int y4[]= {0,0,1,-1};
int x8[]= {0,0,+1,-1,-1,+1,-1,+1};
int y8[]= {-1,+1,0,0,+1,+1,-1,-1};
*/

/*ll nCr(ll aan, ll aar)
{
    ll ii, aac=1;
    for(ii=1; ii<=aar; ii++)
    {
        aac*=(aan-aar+ii);
        aac/=ii;
    }
    return aac;
}

bool status[1100002];
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
}

ll big_mod(ll base, ll power, ll mod)
{
    if(power==0) return 1;
    if(power&1)
    {
        ll p1=base%mod;
        ll p2=(big_mod(base, power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else
    {
        ll p1=(big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}
ll modInverseBigMod(ll a,ll m)  //a*x=1(mod m)
{
    return big_mod(a,m-2,m);
}**/

///START YOUR CODE FROM HERE.... Happy Coding.... ! ;)

/*ll nCr(ll n, ll k)
{
    ll C[n+1][k+1];
    ll i, j;

    // Caculate value of Binomial Coefficient in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previosly stored values
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }

    return C[n][k];
}
*/
#define Mx 40
bitset<Mx>bs;
int main()
{
    faster
    ll t,n,x,ans;
    set<ll>s;
    cin>>t;
    n=1000000000000000000;
    x=3;
    ll y=3;
    s.insert(1);
    s.insert(3);
    while(y<n){
        y*=x;
        s.insert(y);
    }
    while(t--)
    {
        bs.reset();
        cin>>n;
        ans=n;
        if(s.find(n)!=s.end()){
            cout<<n<<'\n';
            continue;
        }
        ll z=*s.lower_bound(n);
        auto pos=s.find(z);
        int Size(0),sz;
        for(auto it=s.begin();it!=pos;it++)
            Size++;
        pos--;
        sz=Size;
        Size--;
        for(auto it=pos;it!=s.begin();it--,Size--)
        {
            if(n>=*it)
                n-=*it,bs.set(Size);
            if(n==0)
                break;
        }
        if(n>0)
            n-=1LL,bs.set(0);
        if(n==0)
        {
            cout<<ans<<'\n';
            continue;
        }
       /* for(int i=0;i<=sz;i++)
        {
            cout<<bs[i]<<'!';
        }
        cout<<"\n";
        */
        int i=0;
        bool payeci=false;
        ans=0;
        for(auto j=s.begin();j!=s.end()&&i<sz;j++,i++)
        {
            if(bs[i]==0&&!payeci)
            {
                payeci=true;
                ans+=*j;
            }
            else if(payeci&&bs[i]==1)
            {
                ans+=*j;
                //cout<<*j<<'!';
            }
            //cout<<ans<<'-';

        }
        pos++;
        if(!payeci)
            cout<<*pos<<'\n';
        else
            cout<<ans<<'\n';
    }
    return 0;
}



