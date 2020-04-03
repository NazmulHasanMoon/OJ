#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 1000001
bitset<sz>bs;
int main()
{
    faster
    int n,m,s,e,in;
    bool ck1,ck2;
    while(cin>>n>>m,n||m)
    {
        ck1=false;
        for(int i=0;i<sz;i++)
            bs.reset(i);
        for(int i=0; i<n; i++)
        {
            cin>>s>>e;
            if(ck1)
                continue;

            for(int j=s; j<e; j++)
            {
                if(bs[j])
                    ck1=true;
                else
                    bs.set(j);
            }

        }
        for(int j,i=0; i<m; i++)
        {
            cin>>s>>e>>in;
            if(ck1)
                continue;
            int st,ed;
            st=s,ed=e;
            while(!ck1&&!ck2)
            {
                //cout<<s<<' '<<e<<endl;
                for(j=st; j<ed; j++)
                {

                    if(j>=sz)
                    {
                        ck2=true;
                        break;
                    }
                    //cout<<bs[j]<<'-'<<j<<endl;;
                    else if(bs[j])
                    {

                        ck1=true;
                        break;
                    }
                    else
                        bs.set(j);
                }
                st+=in;
                ed+=in;
            }

        }
        cout << (!ck1 ? "NO " : "") << "CONFLICT\n";
    }
    return 0;
}
