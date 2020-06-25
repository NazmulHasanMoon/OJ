#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 200002
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int main()
{
    faster
    int n,m,x,y,z;
    cin>>n>>m;
    string s,t,u,v;
    cin>>s>>t;
    char c;
    x=y=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='*')
        {
            for(int j=i+1; j<n; j++)
                v.push_back(s[j]);
            break;
        }
        x=i+1;
        u.push_back(s[i]);
    }
    bool T=true;
    for(int i=0,j=0; i<(m-(n-x)); i++)
    {
        for(j=0; j<x; j++)
        {
            if(u[j]!=t[i+j])
            {
                T=false;
                break;
            }
        }
        if(j==x)
        {
            y=j+i;
            T=true;
            break;
        }
    }
    int w=0;
    if(x<n)
         w=n-x-1;
    //cout<<w<<' '<<y<<' '<<x<<endl;
    if(T)
    {
        for(int i=y,j=0; i<m; i++)
        {
            z=0;
            for(j=0; j<w; j++)
            {
                if(v[j]!=t[i+j])
                {
                    T=false;
                    break;
                }
                else
                    z++;
            }
            //cout<<z<<endl;
            if(z==w)
            {
                T=true;
                break;
            }
        }
    }
    if(T)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
