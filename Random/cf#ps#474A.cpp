#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
map<int,char>mp;
int main()
{
    mp[0]='q',mp[1]='w',mp[2]='e',mp[3]='r',mp[4]='t',mp[5]='y',mp[6]='u',mp[7]='i',mp[8]='o',mp[9]='p',mp[10]='a',mp[11]='s',mp[12]='d',mp[13]='f';
    mp[14]='g',mp[15]='h',mp[16]='j',mp[17]='k',mp[18]='l',mp[19]=';',mp[20]='z',mp[21]='x',mp[22]='c',mp[23]='v',mp[24]='b',mp[25]='n';
    mp[26]='m',mp[27]=',',mp[28]='.',mp[29]='/';
    char c;
    string s;
    cin>>c>>s;
    if(c=='L')
    {
        for(int i=0;s[i]!='\0';i++)
        {
            int x=0;
            for(auto j:mp)
            {
                if(j.ss==s[i])
                {
                    x=j.ff;
                    break;
                }
            }
            cout<<mp[x+1];
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;s[i]!='\0';i++)
        {
            int x=0;
            for(auto j:mp)
            {
                if(j.ss==s[i])
                {
                    x=j.ff;
                    break;
                }
            }
            cout<<mp[x-1];
        }
        cout<<endl;
    }
    return 0;
}
