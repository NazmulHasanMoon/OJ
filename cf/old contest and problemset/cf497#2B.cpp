#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100005
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);
#define pb()   pushback()
int w[sz],h[sz];
int main()
{
    faster
    int n;
    //bool check=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w[i]>>h[i];
        if(!i)
            h[i]=max(w[i],h[i]);
        else
        {
            if(min(w[i],h[i])>h[i-1])
            {
                cout<<"no\n";
                return 0;
            }
            else if(max(w[i],h[i])<=h[i-1])
                h[i]=max(w[i],h[i]);
            else
                h[i]=min(w[i],h[i]);
        }
    }
    cout<<"yes\n";
    return 0;
}
