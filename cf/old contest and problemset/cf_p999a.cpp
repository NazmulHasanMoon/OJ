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
#define sz 200
#define loop(a,b,c)   for(int a=b;a<c;a++)
int a[sz];
int main()
{
    faster
    int n,k,ans(0),re(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n&&a[i]<=k;i++)ans++;

    for(int i=n-1;i>ans&&a[i]<=k;i--)re++;

    cout<<ans+re<<endl;

    return 0;
}
