#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define pb push_back
#define ff first
int a[100001];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    int n,z,o,b;
    while(t--)
    {
        cin>>n;
        z=o=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>a[i],v[i]=a[i];
        for(int i=0;i<n;i++){
            cin>>b;
            if(b)o++;
        }
        if(o==n||o==0)
        {
             sort(v.begin(),v.end());
             for(int i=0;i<n;i++)
             {
                 if(v[i]!=a[i])
                 {
                     z=1;
                     break;
                 }
             }
             if(z)
                cout<<"NO\n";
             else
                cout<<"YES\n";
        }
        else
            cout<<"YES\n";
    }
    return 0;
}
