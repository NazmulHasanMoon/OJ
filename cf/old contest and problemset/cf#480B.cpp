#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pi acos(-1.0)
#define sz 100005
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    if(((n+n+4)>(n*4-k))||(k&1&&n-2<k))
        cout<<"no\n";
    else
    {
        cout<<"yes\n";
        for(int i=0;i<n;i++)
            cout<<'.';
        cout<<"\n.";
        bool t=0;
        int z=k/2;
        if(k&1)
            t=1;
        for(int i=1;i<n;i++)
        {
            if(k&&i<n-1&&t)
                cout<<'#',k--;
            else if(k%2==0&&i<n-1&&!t&&z)
                cout<<'#',z--;
            else
                cout<<'.';
        }
        cout<<"\n.";
        if(!t)
            z=k/2;
        else
            z=0;
        for(int i=1;i<n;i++)
        {
            if(i<n-1&&z)
                cout<<'#',z--;
            else
                cout<<'.';
        }
        cout<<'\n';
        for(int i=0;i<n;i++)
            cout<<'.';
        cout<<'\n';
    }
    return 0;
}
