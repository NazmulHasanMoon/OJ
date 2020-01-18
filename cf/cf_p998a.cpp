#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
#define rn PI/180
#define sf scanf
#define pf printf
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 102
#define loop(a,b,c)   for(int a=b;a<c;a++)
int a[sz];
unordered_map<int,int>mp;
int main()
{
    int n,k;

    cin>>n>>k;
    loop(i,0,n){
        cin>>a[i];
        mp[a[i]]=i+1;
    }
    if(mp.size()<k){
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    for(auto i:mp){
        if(!k)
            return 0;
        cout<<i.ss<<' ';
        k--;
    }
    return 0;
}
