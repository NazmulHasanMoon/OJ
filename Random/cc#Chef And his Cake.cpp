#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 101
typedef long long intt;
string s[sz];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m,t,i(1);
    cin>>t;
    while(i<=t){
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>s[i],cout<<s[i]<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                if(s[i][j]==s[i][j+1])
                    s[i][j]
            }
        }
    }
    return 0;
}
