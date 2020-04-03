#include<bits/stdc++.h>
#include<cctype>
using namespace std;
#define sz 30
#define ss 1005
char c[sz],ch[sz],cc[ss],ck[ss];
int main()
{
    map<char,char>mp;
    cin>>c>>ch>>cc;
    strcpy(ck,cc);
    int l=strlen(c);
    for(int i=0;i<l;i++)
    {
        if(!mp[c[i]])
            mp[c[i]]=ch[i];
    }
    l=strlen(cc);
    for(int i=0;i<l;i++)
    {
        if(isupper(cc[i])){
            cc[i]=tolower(cc[i]);
        }
        if(!mp[cc[i]])
            cout<<cc[i];
        else{
            if(isupper(ck[i])){
                mp[cc[i]]=toupper(mp[cc[i]]);
                cout<<mp[cc[i]];
                mp[cc[i]]=tolower(mp[cc[i]]);
            }
            else
                cout<<mp[cc[i]];
        }
        cc[i]=ck[i];
    }
    cout<<endl;
    return 0;
}
