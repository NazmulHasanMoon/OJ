#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI acos(-1.0)
#define MX 1000006
#define MOD 1000000007

vector<ll>prime;
#define pb push_back

map<ll,ll>mp;
#define ff first
#define ss second

ll n,m,x,y,i,j,k,c,t,status[MX];

void siv()
{
    ll LIM=sqrt(MX);

    for(i=3; i<=LIM; i+=2){
        if(status[i]==0){
            for(j=i*i; j<MX; j+=2*i)
                status[j]=1;
        }
    }

    prime.pb(2);
    for(i=3;i<MX;i+=2){
        if(!status[i]) prime.pb(i);
    }
}

void factorize(ll x)
{
    for(i=0; (prime[i]*prime[i])<=x &&  i<prime.size() ; i++){
        if(x%prime[i]==0){
            while(x%prime[i]==0){
                x/=prime[i];
                mp[prime[i]]++;
            }
        }
    }
    if(x!=1) mp[x]++;
}


int main()
{
    siv();
    int t;cin>>t;
    while(t--){

        cin>>n;
        mp.clear();
        factorize(n);

        if( mp.size() == 1 ){

            ll val , cnt ;
            for(auto i:mp){
                val = i.ff; cnt = i.ss;
            }
            if( cnt < 6 ){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
                cout<<val<<' '<<val*val<<' '<<n/(val*val*val)<<endl;
                continue;
            }

        }

        else if( mp.size() == 2 ){
            vector<ll>v;
            for(auto i:mp){
                int cnt = i.ss;
                while(cnt--)
                    v.push_back(i.ff);
            }

            if( v.size() < 4 ){
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
            cout<<v[0]<<' '<<v[1]*v[2]<<' ';

            ll ans = 1;
            for(int k=3; k<v.size(); k++){
                ans *= v[k];
            }
            cout<<ans<<endl;

        }

        else{
            vector<ll>v;
            for(auto i:mp){
                int cnt = i.ss;
                while(cnt--)
                    v.push_back(i.ff);
            }

            cout<<"YES"<<endl;
            if( v.size() == 3 ){
                cout<<v[0]<<' '<<v[1]<<' '<<v[2]<<endl;
                continue;
            }
            cout<<v[0]<<' '<<v[1]*v[2]<<' ';
            ll ans = 1;
            for(int k=3; k<v.size(); k++){
                ans *= v[k];
            }
            cout<<ans<<endl;
        }


    }




    return 0;
}

