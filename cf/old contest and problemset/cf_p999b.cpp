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
int main()
{
    int n;
    vector<int>v;
    string s;
    cin>>n>>s;
    for(int i=2;i<=n/2;i++)
        if(n%i==0)v.pb(i);
    v.pb(n);
    for(auto i:v)
        reverse(s.begin(),s.begin()+i);
    cout<<s<<endl;
    return 0;
}
