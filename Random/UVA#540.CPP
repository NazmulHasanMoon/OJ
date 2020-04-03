#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 1000000
int team[sz];
queue<int>temp,q[sz];
int main()
{
    faster
    int cs(1),t;
    int n,m;
    int y,z;
    while(cin>>t)
    {
        if(!t)
            break;
        string s;
        cout<<"Scenario #"<<cs++<<'\n';
        while(t--)
        {
            cin>>n;
            while(!q[t].empty())
                q[t].pop();
            for(int i=0; i<n; i++)
            {
                cin>>m;
                team[m]=t;
            }
        }
        while(1)
        {
            cin>>s;
            if(s[0]=='S')
                break;
            else if(s[0]=='E')
            {

                cin>>y;
                z=team[y];
                //cout<<team[y]<<'-'<<z<<endl;
                if(q[z].empty())
                    temp.push(z);
                q[z].push(y);
            }
            else
            {
                z=temp.front();
                cout<<q[z].front()<<'\n';
                q[z].pop();
                if(q[z].empty())
                    temp.pop();
            }
        }
        cout<<'\n';
        while(!temp.empty())
            temp.pop();

    }
    return 0;
}
