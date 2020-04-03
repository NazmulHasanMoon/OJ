#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 1002
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int a[sz];
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        mem(a,0);
        bool tr=false;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            if(a[i]>=0&&!tr)
            {
                tr=true;
                for(int j=i-1;j>=1;j--){
                    if(a[j+1]==0)
                        a[j]=m-1;
                    else
                        a[j]=a[j+1]-1;
                }
            }
            if(a[i]<0&&tr)
            {
                a[i]=a[i-1]+1;
                if(a[i]==m)
                    a[i]=0;
            }
        }
        cout<<a[1]<<((n>1)?' ':'\n');
        for(int i=2;i<=n;i++){
            if(a[i]!=(a[i-1]+1)%m){
                a[i]=(a[i-1]+1)%m;
            }
            cout<<a[i]<<((i<n)?' ':'\n');
        }
    }
    return 0;
}
