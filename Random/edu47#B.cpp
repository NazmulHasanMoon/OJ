#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);
int main()
{
    faster
    string s,c;
    cin>>s;
    int x(0);
    for(auto i:s)
    {
        if(i!='1')
            c.push_back(i);
        else
            x++;
    }
    for(auto i:c)
    {
        if(x&&i=='2')
        {
            while(x)
                cout<<'1',--x;
        }
        cout<<i;
    }
    if(x)
    {
        while(x)
            cout<<'1',--x;
    }
    cout<<endl;
    return 0;
}

