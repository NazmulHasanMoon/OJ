#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//STANDARD DATA TYPES
#define ll long long
#define llu unsigned long long
#define ld long double
//ADV DATA TYPES
#define pii pair < int , int >
#define pll pair < ll, ll >
#define mp make_pair
#define ff first
#define ss second
//C ++ DS
#define vi vector < int >
#define vll vector < ll >
#define pb push_back
#define pf push_front
#define iter :: iterator
#define all(x) x.begin(),x.end()

//priority_queue < pii, vector < pii >, greater < pii > > pq;
//lower_bound(v.begin(),v.end(),20);//for any sorted container
//CONSTANTS
#define MOD 998244353
#define INF 0x3f3f3f3f
#define MAXN (int)(1e5+1)
vector<int> adj[MAXN];
vector<ll> arr(MAXN,0);
vector<ll> sum(MAXN,0);
ll cnt=0;
void dfs(int v,int p,ll lim){
	sum[v]=arr[v];
	vector<ll> temp;
	for(auto u:adj[v]){
		if(u==p)continue;
		dfs(u,v,lim);
		sum[v]+=sum[u];
		temp.pb(sum[u]);
	}
	sort(temp.begin(),temp.end());
	while(sum[v]>lim){
		cnt++;
		sum[v]-=temp.back();
		temp.pop_back();
	}
}
ll solve(ll x){
	cnt=0;
	dfs(1,-1,x);
	return cnt;
}
int main()
{
	fastio;
	int n,k;cin>>n>>k;
	ll l=0,r=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		l=max(l,arr[i]);
		r+=arr[i];
	}
	for(int i=1;i<n;i++){
		int x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	while(l<r){
		ll mid=(l+r)/2;
		if(solve(mid)<=k-1)r=mid;
		else l=mid+1;
	}
	cout<<l<<endl;
}
