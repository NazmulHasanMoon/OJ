/*Never Give up*/
/*
Problem     :
Verdict     :
Time        :
Memory      :
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%lld",&a)
#define sll(a,b)         scanf("%lld%lld",&a,&b)
#define slll(a,b,c)         scanf("%lld%lld%lld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define sc(a) scanf("%c",&a)
#define sz(a)              a.size()
#define ff first
#define ss second
#define all(a)          a.begin(), a.end()
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pf         printf
#define pf1(a)        pf("%d\n",a);
#define PI  acos(-1)
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define vi           vector<int>
#define vl           vector<ll>
#define li            list<int>
#define pi          pair<int,int>
#define pl          pair<ll,ll>
#define mp         map
#define nl         cout<<endl
#define en        pf("Entered\n")
#define en1      pf("Entered 2\n")
#define gcd(a,b) __gcd(a,b)
#define sp  ' '
#define f0(a,n) for(int a=0;a<n;a++)
#define f1(a,n) for(int a=1;a<=n;a++)
#define MOD 1000000007


#define one cout<<"one"<<endl
#define two cout<<"two"<<endl
#define three cout<<"three"<<endl
#define four cout<<"four"<<endl
#define five cout<<"five"<<endl
#define six cout<<"six"<<endl


// priority_queue<int, vector<int>, greater<int> > Q;//for smaller values

#define MAX    100000

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48



int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int sum=0,on=0;
        int tmp=-1;
        for(int i=0; i<sz(str); i++)
        {
            if(str[i]=='1')
            {
                on++;
                int rem;
                if(tmp==-1){
                     rem=i;
                     sum+=((rem)/(k+1));
                }

                else {
                    rem=i-tmp-1;
                    sum+=((rem-k)/(k+1));
                }
                 //       cout<<"rem "<<rem<<endl;
                tmp=i;

               //   cout<<i<<sp<<sum<<endl;
            }
        }
        if(str[sz(str)-1]=='0')
        {
        //   cout<<"E "<<sum<<endl;
        //  cout<<tmp<<endl;
            int rem;
            int tt=sz(str)-1;
            if(tmp==-1)
               sum++,tmp=0;
             rem=n-1-tmp;
         //   cout<<"REM "<<rem<<endl;
            sum+=(rem/(k+1));
          // cout<<"kklE "<<sum<<endl;
        }
      /*  if(tmp==-1)
        {
            sum=n/(k+1);
        }
*/

        cout<<sum<<endl;

    }

    return 0;
}
/*
Ref:1
11 3
00010001000
*/
