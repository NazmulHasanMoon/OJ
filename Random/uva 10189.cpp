#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
int main()
{
    int t(0);
    while(1)
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int x,y;
        cin>>x>>y;
        if(x==0&&y==0)
            break;
        if(t)
            cout<<endl;
        char st[x+2][y+2];
        int start;
        for(int i=0; i<x; i++){
            for(int j=0;j<y;j++)
            {
                cin>>st[i][j];
                if(st[i][j]=='.')
                    st[i][j]='0';
            }
        }
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                if(st[i][j]=='*')
                {
                    if(isdigit(st[i][j+1])&&(j+1)<y)
                        st[i][j+1]=st[i][j+1]-'0'+'1';
                    if(isdigit(st[i+1][j])&&i+1<x)
                        st[i+1][j]=st[i+1][j]-'0'+'1';//v[z].push_back(z+y);
                    if(isdigit(st[i+1][j+1])&&i+1<x&&j+1<y)
                        st[i+1][j+1]=st[i+1][j+1]-'0'+'1';
                    if(isdigit(st[i+1][j-1])&&i+1<x&&j-1>=0)
                        st[i+1][j-1]=st[i+1][j-1]-'0'+'1';
                    if(isdigit(st[i-1][j+1])&&i-1>=0&&j+1<y)
                        st[i-1][j+1]=st[i-1][j+1]-'0'+'1';
                    if(isdigit(st[i][j-1])&&j-1>=0)
                        st[i][j-1]=st[i][j-1]-'0'+'1';
                    if(isdigit(st[i-1][j-1])&&i-1>=0&&j-1>=0)
                        st[i-1][j-1]=st[i-1][j-1]-'0'+'1';
                    if(isdigit(st[i-1][j])&&i-1>=0)
                        st[i-1][j]=st[i-1][j]-'0'+'1';
                }
            }
        }
        cout<<"Field #"<<++t<<":\n";
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
                cout<<st[i][j];
            cout<<endl;
        }

    }
    return 0;
}
