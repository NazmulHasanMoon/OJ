#include<bits/stdc++.h>
using namespace std;
#define loopn(a,b,c)  for(int a=b;a>c;a--)
#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define sz 200002
int a[sz];
vector<pair<int,int>>v;
int main()
{
    faster
    int n,k,i,j,re(0);
    cin>>n>>k;
    loop(i,0,n)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    for(i=0,j=1;j<n;)
    {
       ///cout<<a[i]<<' '<<a[j]<<endl;
        if(a[i]>a[j]&&a[i]<=a[j]+k){
            re++;
            j++;
            continue;
        }
        else
            i++;
        if(i==j)
            j++;
    }
    cout<<n-re<<endl;
    return 0;
}
