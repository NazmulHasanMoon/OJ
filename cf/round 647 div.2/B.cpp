#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,a,n;
    cin>>t;
    set<int>s;
    while(t--)
    {
        s.clear();
        cin>>n>>a;
        s.insert(a);
        for(int i=1;i<n;i++)
            cin>>a,s.insert(a);
        bool flag;
        int x;
        for(int i=1;i<=1024;i++)
        {
            flag=1;
            for(auto j:s)
            {
                x=i^j;
                if(s.find(x)==s.end()){
                    flag=0;
                    break;
                }
            }
            if(flag){
                cout<<i<<'\n';
                break;
            }
        }
        if(!flag)
            cout<<"-1\n";
    }
    return 0;
}
