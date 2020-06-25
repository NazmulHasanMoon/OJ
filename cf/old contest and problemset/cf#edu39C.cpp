#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    string c;
    c="abcdefghijklmnopqrstuvwxyz";
    cin>>s;
    map<char,int>mp;
    int x(0);
    for(int i=0;s[i]!='\0';i++)
    {
        if(mp.find(s[i])!=mp.end())
        {
            //s[i]=s[i]+1;
            for(int j=1;j<=25;j++)
            {
                s[i]=s[i]+1;
                if(s[i]!='{'&&s[i]==c[x]){
                    mp[s[i]]=1,x++;
                    break;
                }
                if(s[i]=='{'){
                    s[i]=s[i]-1;
                    break;
                }
            }
            //cout<<s[i]<<' ';
        }
        else if(s[i]==c[x])
            mp[s[i]]=1,x++;
        if(x==26)
            break;
    }
    if(x>=26)
        cout<<s<<endl;
    else
        cout<<"-1\n";
    return 0;
}
