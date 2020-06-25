#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 102
#define ff first
#define ss second
#define ll long long
int l[sz],r[sz];
int main()
{
    faster
    int n,re(0),k;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>l[i]>>r[i];
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(k>=l[i]&&k<=r[i]){
            break;
        }
        re++;
    }
    cout<<n-re<<'\n';
    return 0;
}

