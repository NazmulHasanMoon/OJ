#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define sz 1000
char c[sz][sz];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>c[i][j];
    if(n==1&&m==1){
        cout<<"Yes\n"<<c[0][0];
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i-1>=0&&c[i-1][j]=='.'&&(c[i][j]=='s'||c[i][j]=='W'))
                c[i-1][j]='D';
            if(j-1>=0&&c[i][j-1]=='.'&&(c[i][j]=='s'||c[i][j]=='W'))
                c[i][j-1]='D';
            if(j+1<m&&c[i][j+1]=='.'&&(c[i][j]=='s'||c[i][j]=='W'))
                c[i][j+1]='D';
            if(i+1<n&&c[i+1][j]=='.'&&(c[i][j]=='s'||c[i][j]=='W'))
                c[i+1][j]='D';
            if((j+1<m&&c[i][j+1]=='S'&&c[i][j]=='W')||(j+1<m&&c[i][j+1]=='W'&&c[i][j]=='S')||(i+1<n&&c[i+1][j]=='S'&&c[i][j]=='W')||(i+1<n&&c[i+1][j]=='W'&&c[i][j]=='S')||(i-1>=0&&c[i-1][j]=='S'&&c[i][j]=='W')||(i-1>=0&&c[i-1][j]=='W'&&c[i][j]=='S')||(j-1>=0&&c[i][j-1]=='S'&&c[i][j-1]=='W')||(j-1>=0&&c[i][j-1]=='W'&&c[i][j-1]=='S'))
            {
                cout<<"No\n";
                return 0;
            }
        }
    }
    cout<<"Yes\n";
    for(int i=0;i<n;i++)
        cout<<c[i]<<'\n';
    return 0;
}
