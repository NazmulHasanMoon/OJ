#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define sz 100001
#define ll long long
int a[sz];
unordered_map<int,bool>r;
int main()
{
    faster
    bool ck;
    int n,p1,p,q,cnt,ans=INT_MAX;
    int x[4],y[4];
    cin>>n;
    if(n<=2)
    {
        cout<<"0\n";
        return 0;
    }
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=-1;i<=1;i++)
    {
        for(int j=-1;j<=1;j++)
        {
            p1=(a[1]+j)-(a[0]+i);
            //cout<<p1<<'!';
            q=a[1]+j;
            cnt=0;
            ck=true;
            if(j)cnt++;
            if(i)cnt++;
            ///cout<<cnt<<'#'<<i<<'+'<<j<<"=";
            for(int k=2;k<n;k++)
            {
                p=q+p1;
                //cout<<p<<'-';
                if(abs(p-a[k])==1)
                    cnt++;
                else if(abs(p-a[k])>1)
                {
                    ck=false;
                    break;
                }
                q=p;
            }
           ///cout<<endl;
            ///cout<<cnt<<endl;
            if(ck)
                ans=min(ans,cnt);
        }
    }
    if(ans==INT_MAX) cout<<"-1\n";
    else cout<<ans<<'\n';
    return 0;
}
