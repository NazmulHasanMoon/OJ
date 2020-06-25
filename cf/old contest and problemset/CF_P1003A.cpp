#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define ff first
#define ss second
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(a,b,c)   for(int a=b;a<c;a++)
unordered_map<int,int>mp;
int main()
{
    faster
    int n,x,mx=INT_MIN;

    cin>>n;
    loop(i,0,n)
    {
        cin>>x;
        mp[x]++;
    }
    for(auto i:mp)
        mx=max(mx,i.ss);
    cout<<mx<<endl;
    return 0;
}
