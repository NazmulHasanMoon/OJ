#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    int cs(1);
    while(cin>>s)
    {
        int t,l;
        l=s.size();
        cout<<"Case "<<cs++<<":\n";
        int x,y;
        x=y=0;
        vector<pair<int,int> >v;
        for(int i=1;i<l;i++)
        {
            if(s[i]==s[i-1])
                y=i;
            else
                v.push_back({x,y}),x=y=i;
        }
        v.push_back({x,y});
        int n,a,b;
        bool ck;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            ck=false;
            if(a>b)
                swap(a,b);
            for(auto j: v)
            {
                if(j.ff<=a&&j.ss>=b){
                    cout<<"Yes\n",ck=true;
                    break;
                }
            }
            if(!ck)
                cout<<"No\n";
        }
    }
    return 0;
}
