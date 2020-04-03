#include<bits/stdc++.h>
using namespace std;
string s[51],ss[51],re[51];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int j=0; j<m; j++)
        cin>>ss[i];
    int l,k,p,q,r,s,t;
    for(int i=0; i<m; i; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i]==ss[i][j])
                c++;
        }
        if(c!=m)
            re[k++]=0;
        else
            re[k++]=1;
    }

    return 0;
}
