#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pii pair<int,int>
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int p,y;
    cin>>p>>y;
    bool t=true;
    for(int i=y; i>p; i--)
    {

        if(i%2==0)
            t=false;
        if(t)
        {
            int x=sqrt(i*1.0)+1;
            for(int j=3; j<=p&&j<=x; j+=2)
            {
                if(i%j==0)
                {
                    t=false;
                    break;
                }
            }
        }
        if(t)
        {
            cout<<i<<'\n';
            return 0;
        }
        else
            t=true;
    }
    cout<<"-1\n";
    return 0;
}
