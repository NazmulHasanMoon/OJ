#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
deque<int>q;
int main()
{
    faster
    //freopen("output.txt","w",stdout);
    int t,cs(1);
    int p,c,x,y,k;
    while(cin>>p>>c)
    {
        if(!p&&!c)
            break;
        while(!q.empty())
            q.pop_front();
        for(int i=1;i<=1000&&i<=p;i++)
            q.push_back(i);
        cout<<"Case "<<cs++<<":\n";
        char s;
        for(int i=0;i<c;i++){
            cin>>s;
            if(s=='E')
            {
                cin>>y;
                k=0;
                for(auto j:q)
                {
                    if(j==y)
                    {
                        q.erase(q.begin()+k,q.begin()+k+1);
                        break;
                    }
                    k++;
                }
                q.push_front(y);
            }
            else
            {
                int z=q.front();
                cout<<z<<'\n';
                q.pop_front();
                //if(q.back()!=z)
                q.push_back(z);
            }
        }

    }
    return 0;
}
