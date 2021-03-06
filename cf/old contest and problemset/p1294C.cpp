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
#define SIZE 2000002
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
int dx4[]= {1,-1,0,0};
int dy4[]= {0,0,1,-1};
int dx8[]= {0,0,+1,-1,-1,+1,-1,+1};
int dy8[]= {-1,+1,0,0,+1,+1,-1,-1};


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
}*/
///START YOUR CODE FROM HERE.... Happy Coding.... ! ;)

vector<ll>prime;
map<ll,ll>omp;

ll x,y,z,pre,n;
ll status[SIZE];
ll i,j;
void siv()
{
    ll sq=sqrt(SIZE);

    for(i=3; i<=sq; i+=2){
        if(status[i]==0){
            for(j=i*i; j<SIZE; j+=2*i)
                status[j]=1;
        }
    }

    prime.pb(2);
    for(i=3;i<SIZE;i+=2){
        if(!status[i]) prime.pb(i);
    }
}

void factorize(ll x)
{
    for(i=0; (prime[i]*prime[i])<=x && i<prime.size() ; i++)
    {
        if(x%prime[i]==0)
        {
            while(x%prime[i]==0)
            {
                x/=prime[i];
                omp[prime[i]]++;
            }
        }
    }
    if(x!=1)
        omp[x]++;
}


int main()
{
    faster
    //ifstream in("popcorn.txt");
    //ofstream out("file.txt");
    siv();
    int t;
    cin>>t;
    vector<ll>v;
    ll ans;
    while(t--)
    {
        ans=1;
        v.clear();
        cin>>n;
        omp.clear();
        factorize(n);
        if( omp.size() == 1 )
        {

            for(auto i:omp)
            {
                x = i.ff;
                y = i.ss;
            }
            if( y < 6 )
            {
                cout<<"NO\n";
                continue;
            }
            else
            {
                cout<<"YES\n"<<x<<' '<<x*x<<' '<<n/(x*x*x)<<'\n';
                continue;
            }

        }
        else if(omp.size()==2)
        {
            vector<ll>v2;
            for(auto i:omp)
            {
                x=i.ff;
                y=i.ss;
                v2.pb(x);
                while(y--)
                    v.pb(x);
            }
            if(v.size()<4)
            {
                cout<<"NO\n";
                continue;
            }
            cout<<"YES\n";
            ///vector<ll>::iterator ip;
            ///ip = unique(v.begin(), v.begin()+v.size());
            cout<<v2[0]<<' '<<v2[1]<<' '<<n/(v2[0]*v2[1])<<'\n';

        }
        else
        {
            for(auto i:omp)
            {
                x=i.ff;
                y=i.ss;
                v.pb(x);
            }
            cout<<"YES\n";
            cout<<v[0]<<' '<<v[1]<<' '<<n/(v[0]*v[1])<<'\n';
        }
    }

    return 0;
}
