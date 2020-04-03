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
    while(n--)
    {
        string st;
        cin>>st;
        bool t=1;
        int i,j,x(0),y,z;
        for(i=0,j=0; st[i]&&s[j]; i++,j++)
        {
            if((st[i]==s[j]||s[j]=='?')&&mp.find(st[i])!=mp.end())
                t=1;
            else if(s[j]=='*')
            {
                while(!isalnum(s[j])&&s[j])
                    j++;
                j--;
                if(!(mp.find(st[i])!=mp.end()))
                {
                    while(!(mp.find(st[i])!=mp.end()))
                        i++;
                }
                i--;
                //cout<<i<<'-'<<j<<endl;
            }
            else
            {
                t=0;
                break;
            }
        }
        if(j<s.size()&&s[j]=='*'&&st[i]=='\0'&&(st[i-1]==s[j-1]||mp.find(st[i-1])!=mp.end()))
            cout<<"YES\n";
        //cout<<t<<' '<<i<<' '<<j<<endl;
        else if(!t||j<s.size()||i<st.size())
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
