#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    string s;
    list<char>v;
    while(cin>>s)
    {
        list<char>::iterator it=v.begin();
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='[')
                it=v.begin();
            else if(s[i]==']')
                it=v.end();
            else
                v.insert(it,s[i]);
        }
        for(auto i:v)
            cout<<i;
        cout<<'\n';
        v.clear();

    }
    return 0;
}
