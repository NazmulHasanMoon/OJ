#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int x,y,z(0);
    x=s.size();
    y=t.size();
    if(x!=y)
    {
        cout<<"NO\n";
        return 0;
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'))
            z++;
        else if((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')&&(t[i]!='a'&&t[i]!='e'&&t[i]!='i'&&t[i]!='o'&&t[i]!='u'))
            z++;
    }
    if(z==x)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
