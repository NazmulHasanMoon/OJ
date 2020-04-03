#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
ll n,x,cnt;
int digit(ll y)
{
    int cnt=0;
    while(y>0)
    {
        y/=10;
        //cout<<y<<endl;
        cnt++;
    }
    return cnt;
}
ll fd(ll cnt)
{
    ll z;
    z=9;
    int w=cnt;
    w--;
    while(w!=0)
    {
        z=z*10+9;
        w--;
    }
    return z;
}
void re(ll page,ll cnt)
{
    if(n%cnt==0)
        cout<<page+(n/cnt)<<'\n';
    else
        cout<<"-1\n";
}
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
       cin>>n>>x;
       ll page=0;
       cnt=digit(x);
      // cout<<cnt<<'?';
       ll j=0;
       bool ck=true;
       while(ck)
       {
           ll z;
            z=fd(cnt);
            ll y=(z-x+1);
            x=z+1;
            //cout<<z<<' '<<y<<' '<<x<<' '<<cnt<<endl;
            if((y*cnt)<n)
                n=n-(y*cnt),page+=y,cnt++;
            else
            {
                re(page,cnt);
                ck=false;
            }
            //j++;
       }
    }
    return 0;
}

