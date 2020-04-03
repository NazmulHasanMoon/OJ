#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(cin>>n)
    {
        while(n--)
        {
            string s,s2;
            cin>>s;
            int l=s.size();
            if(s=="1"||s=="4"||s=="78")
                cout<<"+\n";
            else if(s[l-2]=='3'&&s[l-1]=='5')
                cout<<"-\n";
            else if(s[0]=='9'&&s[l-1]=='4')
                cout<<"*\n";
            else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0')
                cout<<"?\n";
        }
    }
    return 0;
}
