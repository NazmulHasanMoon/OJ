#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,x;
    cin>>t;
    set<int>s;
    while(t--)
    {
        s.clear();
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            s.insert(x);
        }
        if(s.size()>k)
        {
            cout<<"-1\n";
            continue;
        }
        cout<<n*k<<endl;
        x=k;
        for(int j=0; j<n; j++)
        {
            x=k;
            while(x)
            {
                for(auto i: s)
                {
                    cout<<i<<' ';
                    x--;
                    if(!x)break;
                }
            }
        }
        ///s.clear();
        cout<<"\n";
    }
    return 0;
}
