#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool t(0);
    int c(0),l=s.size();
    for(int i=0;i<l;)
    {
        while(s[i]=='0')
        {
            c++;
            i++;
        }
        if(c>=7){
            t=1;
            break;
        }
        c=0;
        while(s[i]=='1')
        {
            c++,i++;
        }

        if(c>=7){
            t=1;
            break;
        }
        c=0;
    }
    if(t)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
