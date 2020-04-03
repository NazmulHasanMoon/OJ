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
int main()
{
    faster
    int n,k,i(1),j(0);
    cin>>n>>k;
    vector<int>v;
    while(i<=n)
    {
        if(i==1)
            v.push_back(i),i=i+k+1;
        else if(i+k<n)
            v.push_back(i+k),i=i+k+k+1;
        else
            v.push_back(n),i=i+k+k+1;;
        j++;
    }
    cout<<j<<'\n';
    for(int i=0;i<j;i++ )
        cout<<v[i]<<' ';
    return 0;
}

