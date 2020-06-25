#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s,res;
    set<char>st;
    int x,y;
    vector<char>v;
    while(t--)
    {
        cin>>s;
        x=y=0;
        for(auto i: s)
        {
            if(i=='0')x++;
            else y++;
        }
        if(s[0]=='0')
        {
            if(!y)
            {
                while(x)cout<<'0',x--;
            }
            else
            {
                while(x)cout<<"01",x--;
                y--;
                while(y)cout<<"01",y--;
            }
        }
        else
        {
            if(!x)
            {
                while(y)cout<<'1',y--;
            }
            else
            {
                while(y)cout<<"10",y--;
                x--;
                while(x)cout<<"10",x--;
            }
        }
        cout<<"\n";
    }
    return 0;
}
