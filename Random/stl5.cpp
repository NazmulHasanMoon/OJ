#include<bits/stdc++.h>
using namespace std;
#define sz 20
char s[sz];
int main()
{
    map<string,int>mp;
    int n,m;
    cin>>m>>n;
    for(int i=0;i<m;i++){
            int x;
        cin>>s>>x;
        mp[s]=x;

    }
    for(int i=0;i<n;i++){
        long long c(0);
        while(1)
        {
            int l;
            cin>>s;
            l=strlen(s);
            if(s[l-1]=='.')
                break;
            if(mp.find(s)!=mp.end())
                c+=mp[s];
        }
    cout<<c<<endl;
    }
    return 0;
}

