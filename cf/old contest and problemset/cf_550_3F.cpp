#include<bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define sz 1000005

vector<int>G[sz];
#define pb push_back

int color[sz];

bool Bicoloring(int s)
{
    queue<int>Q;
    color[s]=1;
    Q.push(s);

    while(!Q.empty()){

        int u = Q.front();
        Q.pop();

        for(int i=0; i<G[u].size(); i++){
            int v = G[u][i];

            if(color[v]==-1){
                color[v]=1-color[u];  /// parent 1 then child 0 & vice versa
                Q.push(v);
                ///cout<<color[u]<<'-'<<u<<':'<<v<<'-'<<color[v]<<"!\n";
            }

            if(color[v]==color[u])
                return false;
        }
    }

    return true;
}

int main()
{

    int n,e,i,j,x,y;

    cin>>n>>e;

    vector< pair<int,int> >v;

    for(i=0; i<e; i++){
        cin>>x>>y;
        G[x].pb(y);
        G[y].pb(x);

        v.push_back({x,y});
    }

    memset(color,-1,sizeof(color));

    if(Bicoloring(1)){

        cout<<"YES"<<endl;
        for(auto i:v){
           if( color[i.first] == 1 ) cout<<1;
           else cout<<0;
        }


        return 0;

    }


    cout<<"NO"<<endl;


    return 0;
}
