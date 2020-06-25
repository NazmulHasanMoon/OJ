#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100002
#define ff first
#define ss second
#define ll long long
int main()
{
    int n,re(0),k;
    cin>>n>>k;
    re=min(k-1,n-k);
    re+=(n*3);
    cout<<re<<'\n';
    return 0;
}

