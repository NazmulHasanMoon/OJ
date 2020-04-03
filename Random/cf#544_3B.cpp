#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200002
#define ff first
#define ss second
map<int,int>mp;
int arr[sz];
int main()
{
    faster
    int n,k,a,j(0);
    cin>>n>>k;

    for(int i=0; i<n; i++)
        cin>>a,a=a%k,mp[a]++;
    for(auto i: mp)
        arr[j++]=i.ff;
    int re(0),i=0;
    int ck,mn;
    if(arr[0]==0)
        re+=(mp[0]&1)?mp[0]-1:mp[0],i=1;
    //cout<<re<<'\n';
    for(; i<j; i++)
    {
        if(mp[arr[i]]>1&&(arr[i]+arr[i])%k==0)
        {
            re+=(mp[arr[i]]&1)?mp[arr[i]]-1:mp[arr[i]];
            mp[arr[i]]=0;
        }
        if(mp[arr[i]]>0)
        {
            //cout<<mp[arr[i]]<<'!';
            for(int l=i+1; l<j; l++)
            {
                ck=(arr[i]+arr[l])%k;
                if(ck==0)
                {
                    mn=min(mp[arr[i]],mp[arr[l]]);
                    re+=(mn*2);
                    //cout<<re<<' '<<mn<<'\n';
                    mp[arr[i]]-=mn;
                    mp[arr[l]]-=mn;
                }
            }
        }
    }
    cout<<re<<'\n';
    return 0;
}
