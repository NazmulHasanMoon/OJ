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
#define loop(a,b,c)   for(int a=b;a<c;a++)
bool cmp(string a, string b)
{
    return a.length() < b.length();
}
int main()
{
    faster
    vector<string>v;
    int n;
    cin>>n;
    string s;
    loop(i,0,n)
    {
        cin>>s;
        v.pb(s);
    }
    sort(v.begin(),v.end(),cmp);
    int x,y;
    loop(i,1,n)
    {
        if(v[i].find(v[i-1])==-1)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    for(auto i:v)
        cout<<i<<'\n';
    return 0;
}
