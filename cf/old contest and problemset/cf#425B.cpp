#include<bits/stdc++.h>
#include<cstring>
#include<cctype>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 100002
#define ll long long
int main()
{
    map<char,int>mp;
    char ch[29];
    string s;
    int n;
    cin>>ch;
    for(int i=0; ch[i]; i++)
        mp[ch[i]]=1;
    cin>>s>>n;
    int w,v=s.size();
    w=v;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='*')
            v--;
    }

    while(n--)
    {
        string st;
        cin>>st;
        bool t=1;
        int i,j,z;
        int l=st.size();
        z=max(l,v);
        if(v>l)
            cout<<"NO\n";
        else
        {
            for(i=0,j=0; i<z; i++,j++)
            {
                if(st[i]==s[j]||(s[j]=='?'&&mp.find(st[i])!=mp.end()))
                    t=1;
                else if(s[j]=='*')
                {
                    int x=l-1;
                    int y=w-1;
                    j++;
                   // cout<<s[j]<<endl;
                    while(x>=i&&y>=j)
                    {
                       // cout<<"*"<<st[x]<<'-'<<s[y]<<'-'<<mp[st[x]]<<endl;;
                        if(st[x]==s[y]||(s[y]=='?'&&mp.find(st[x])!=mp.end()))
                            t=1;
                        else
                        {
                            t=0;
                            break;
                        }
                        //cout<<st[x]<<' '<<s[y]<<endl;
                        x--,y--;
                    }
                    if(x>=i&&t)
                    {
                        while(x>=i)
                        {
                            if(!(mp.find(st[x])!=mp.end()))
                                t=1;
                            else
                            {
                                t=0;
                                break;
                            }
                            x--;
                        }
                    }
                    break;
                    // cout<<i<<'-'<<j<<endl;

                }
                else
                {
                    t=0;
                    break;
                }
            }
            if(!t)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
