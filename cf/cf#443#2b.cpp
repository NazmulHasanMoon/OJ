#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
typedef long long ll;
int main()
{
    ll k,c(0);
    int n,x,mx=INT_MIN;
    deque<int>v;
    sf("%d %I64d",&n,&k);
    for(int i=0; i<n; i++)
        sf("%d",&x),mx=max(mx,x),v.push_back(x);
    bool t=1;
    int i(0),w=0;
    while(t)
    {
        int y=v[0],z(0);
        v.pop_front();\
        n--;
        if(y<v[0]){
            v.push_back(y);
            //cout<<y<<endl;
            w=1;
        }
        else
        {
            c=w;
            //cout<<v.size()<<endl;
            while(y>v[0]&&c<k)
            {
                c++;
                n--;
               //cout<<v[0]<<' ';
                int z=v[0];
                v.pop_front();
                if(n<=0){
                    t=0;
                    break;
                }
                v.push_back(z);
            }
            //cout<<endl<<c<<' '<<k<<endl;
            v.push_back(y);
            if(c==k)
            {
                t=0;
                c=y;
                //break;
                pf("%I64d\n",c);
                return 0;
            }
            w=1;
           //cout<<endl;
        }
    }
    pf("%d\n",mx);
    return 0;
}
