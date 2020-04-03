#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int mpp[1010];
void divisor_S()
{
    int n=1000;
    int i,j;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
            mpp[j]+=i;
    }
}
int main()
{
    faster
    divisor_S();
    map<int,int>mp;
    for(int i=1;i<=1000;i++){
        if(mpp[i]<=1000)
            mp[mpp[i]]=i;//cout<<mpp[i]<<'-'<<i<<endl;
    }
    int n,cs(1);
    while(1)
    {
        cin>>n;
        if(!n)
            break;
        if(mp.find(n)!=mp.end())
            cout<<"Case "<<cs++<<": "<<mp[n]<<'\n';
        else
            cout<<"Case "<<cs++<<": "<<"-1\n";
    }
    return 0;
}
