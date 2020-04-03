#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define sz 1000
char st1[sz][sz],st2[sz][sz];
int Find(int N,int n)
{
    int re(0);
    bool ck;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            ck=true;
            for(int k=0;k<n;k++)
            {
                for(int l=0;l<n;l++)
                {
                    if(st1[i+k][j+l]!=st2[k][l]){
                        ck=false;
                        break;
                    }
                }
                if(!ck)
                    break;
            }
            if(ck)
                re++;
        }
    }
    return re;
}
void rotated(int n)
{
    char temp[n+2][n+2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            temp[i][j]=st2[n-j-1][i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            st2[i][j]=temp[i][j];
    }
}
int main()
{
    faster
    int N,n;

    while(1)
    {
        cin>>N>>n;
        if(!N&&!n)
            break;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
                cin>>st1[i][j];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cin>>st2[i][j];
        }
        for(int i=0; i<4; i++)
        {
            if(i)
                cout<<' ';
            cout<<Find(N,n);
            rotated(n);
        }
        cout<<'\n';
    }
    return 0;
}
