#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100002
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int par[sz];
int root(int z)
{
    while(par[z]!=z)
    {
        par[z]=par[par[z]];
        z=par[z];
    }
    return z;
}

int main()
{
    faster
    int n,i(0);
    cin>>n;
    map<char,int>mp;
    //map<int,int>mpp;
    cin.ignore();
    cin.ignore();
    while(i<n)
    {

        if(i)
            cout<<'\n';
        i++;
        int j=1,ans;
        string cc;
        mem(par,0);
        getline(cin,cc);
        ans=(int)(cc[0]-'A')+1;
       // cout<<ans<<endl;
        while(1)
        {
            string s;
            if(!getline(cin,s)||s.empty())
                break;
            if(mp.find(s[0])==mp.end())
                mp[s[0]]=j,par[j]=j,j++;
            if(mp.find(s[1])==mp.end())
                mp[s[1]]=j,par[j]=j,j++;
            int x=root(mp[s[0]]);
            int y=root(mp[s[1]]);
            if(x!=y){
                par[x]=par[y];
                ans--;
            }
        }
        cout<<ans<<'\n';
        mp.clear();
       // mpp.clear();
    }
    return 0;
}

