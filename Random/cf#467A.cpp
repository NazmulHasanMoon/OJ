#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pii pair<int,int>
typedef long long ll;
#define sz 100001
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    set<int>s;
    int n,p,c(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        s.insert(p);
        if(!p)
            c=1;
    }
    cout<<s.size()-c<<endl;
    return 0;
}
