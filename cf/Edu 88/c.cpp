#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,h,w,c,z,x,y,prev,ans;
    cin>>t;
    ll s;
    while(t--)
    {
        cin>>h>>c>>w;
        ans=1;
        s=0;
        for(int i=1;;i++)
        {
            if(i&1)s+=(ll)h;
            else s+=(ll)c;
            if((s+1)%w==0||s%w==0){
                ans=i;
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
